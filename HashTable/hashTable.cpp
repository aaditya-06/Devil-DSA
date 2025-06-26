#include <iostream>
#include <string>

using namespace std;

class Node{
  pulic:
    string key;
    int val;
    Node* next;

    Node(string key, int val){
      this->key = key;
      this->val = val;

      next = NULL;
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

    return idx;
  }

  public:
    hashTable(int size){
      totSize = size;
      currSize = 0;

      table = new Node*[totSize];
      for(int i = 0; i < totSize; i++){
        table[i] = NULL;
      }
    }

    void insert(string key, int val){
      int idx = hashfunction(key);
      Node* newNode = new Node(key, value);
      Node* head = table[idx];
    }
};

int main(){


  return 0;
}
