#include <bits/stdc++.h> // Includes all standard libraries

using namespace std; // Brings all names from the std namespace into the global scope

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int size;
        cin >> size;
        
        vector<int> arr(size);
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        
        sort(arr.begin(), arr.end());
        bool isPossible = true;
        
        for (int i = 0; i < size - 1; i++) {
            if (abs(arr[i] - arr[i + 1]) > 1) {
                isPossible = false;
                break;
            }
        }
        
        if (isPossible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0; // Indicates successful program execution
}