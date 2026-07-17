#include <bits/stdc++.h> // Includes all standard libraries

using namespace std; // Brings all names from the std namespace into the global scope

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string inp;
        cin >> inp;
        
        if (inp.size() == 3 and (inp[0] == 'y' or inp[0] == 'Y')
                            and (inp[1] == 'e' or inp[1] == 'E')
                            and (inp[2] == 's' or inp[2] == 'S')) {
                                cout << "YES\n";
                            } else {
                                cout << "NO\n";
                            }
    }
    return 0; // Indicates successful program execution
}