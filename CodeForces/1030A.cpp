#include <bits/stdc++.h> // Includes all standard libraries

using namespace std; // Brings all names from the std namespace into the global scope

int main() {
    int n;
    cin >> n;
    
    int c0 = 0, c1 = 0;
    
    while (n--) {
        int temp;
        cin >> temp;
        
        if (temp == 0)
            c0++;
        else
            c1++;
    }
    
    if (c1 >= 1)
        cout << "HARD\n";
    else
        cout << "EASY\n";
        
    return 0; // Indicates successful program execution
}