#include <iostream>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
using namespace std;

int main() {
    // Ordered map (keys will be sorted)
    map<string, int> m;
    unordered_map<string, int> um;

    // Sets
    set<string> s;
    unordered_set<string> us;

    // Fill map
    m["B"] = 2;
    m["A"] = 1;
    m["D"] = 4;
    m["E"] = 5;
    m["C"] = 3;

    // Fill unordered_map
    um["Three"] = 3;
    um["One"] = 1;
    um["Two"] = 2;

    // Fill set
    s.insert("Three");
    s.insert("One");
    s.insert("Two");

    // Fill unordered_set
    us.insert("Three");
    us.insert("One");
    us.insert("Two");

    // Print map
    cout << "\nmap (ordered):" << endl;
    for (pair<string, int> alpha : m) {
        cout << alpha.first << " -> " << alpha.second << endl;
    }

    // Print unordered_map
    cout << "\nunordered_map (unordered):" << endl;
    for (pair<string, int> alpha : um) {
        cout << alpha.first << " -> " << alpha.second << endl;
    }

    // Print set
    cout << "\nset (ordered):" << endl;
    for (auto el : s) {
        cout << el << " ";
    }

    // Print unordered_set
    cout << "\n\nunordered_set (unordered):" << endl;
    for (auto el : us) {
        cout << el << " ";
    }

    // Check if element exists in unordered_set
    if (us.find("Three") != us.end()) {
        cout << "\n\n'Three' exists in unordered_set.\n";
    } else {
        cout << "\n\n'Three' does not exist in unordered_set.\n";
    }

    return 0;
}
