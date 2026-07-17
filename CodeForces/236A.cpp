#include <bits/stdc++.h> // Includes all standard libraries

using namespace std; // Brings all names from the std namespace into the global scope

int main() {
    string inp;
    cin >> inp;
    
    unordered_set<char> s;
    for (char c: inp) {
        s.insert(c);
    }
    
    if (s.size() % 2 == 1) {
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }
    
    return 0; // Indicates successful program execution
}