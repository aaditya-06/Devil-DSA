#include <iostream>
#include <string>

using namespace std;

class Node{
  public:
    string key;
    int val;
    Node* next;

    Node(string key, int val){
      this->key = key;
      this->val = val;

      next = NULL;
    }

    ~Node(){

    }
};

class HashTable{
  int totSize;
  int currSize;
  Node** table;

  int hashfunction(string key){
    int idx = 0;

    for(int i = 0; i < key.size() ; i++){
      idx = idx + (key[i] * key[i]) % totSize;
    }

    return idx%totSize;
  }

  void rehash(){
    Node** oldTable = table;
    int oldSize = totSize;

    totSize = 2*totSize;
    currSize = 0;
    table = new Node*[totSize];

    for(int i = 0; i < totSize; i++){
      table[i] = NULL;
    }

    for(int i =0; i < oldSize; i++){
      Node* temp = oldTable[i];
      while(temp != NULL){
        insert(temp -> key, temp -> val);
        temp = temp -> next;
      }

      if(oldTable[i] != NULL){
        delete oldTable[i];
      }
    }
    delete[] oldTable;
  }

public:
    HashTable(int size){
      totSize = size;
      currSize = 0;

      table = new Node*[totSize];
      for(int i = 0; i < totSize; i++){
        table[i] = NULL;
      }
    }

    void insert(string key, int val){
      int idx = hashfunction(key);
      Node* newNode = new Node(key, val);

      newNode -> next = table[idx];
      table[idx] = newNode;
      currSize++;

      double loadFactor = (double)currSize / totSize;
        if (loadFactor > 1.0) {
            rehash();
        }
    }

    bool exists(string key){
      int idx = hashfunction(key);
      Node * temp = table[idx];
      while( temp != NULL){
        if(temp -> key == key){
          return true;
        }
        temp = temp -> next;
      }
      return false;
    }

    int search(string key){
      int idx = hashfunction(key);
      Node * temp = table[idx];
      while( temp != NULL){
        if(temp -> key == key){
          return temp -> val;
        }
        temp = temp -> next;
      }
      return -1;
    }

    void print(){
      for(int i = 0; i < totSize; i++){
        cout << "[" << i << "]: ";
        Node* temp = table[i];
        while(temp != NULL){
          cout << "(" << temp->key << " -> " << temp->val << ") -> ";
                temp = temp->next;
        }
        cout << "NULL\n";
      }
    }
};

int main(){

  HashTable ht(5);
  ht.insert("A", 150);
  ht.insert("B", 15);
  ht.insert("C", 1);
  ht.insert("D", 1500);
  ht.insert("E", 151); //trigger rehash
  ht.insert("F", 1511); //trigger rehash

  if(ht.exists("A")){

    cout <<"Exists " << "A num-> " << ht.search("A") << endl;
  }`

  ht.print();

  return 0;
}
