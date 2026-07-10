#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Solve function
void solve() {
    int row, col, isExist = true;
    char c;
    
    cin >> row >> col;
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> c;
            
            if (c == 'C' || c == 'M' || c == 'Y')
                isExist = false;
        }
    }
    
    if (isExist)
        cout << "#Black&White\n";
    else
        cout << "#Color\n";
}

// Main function
int main() {
    fastio();

    int t = 1;
    // cin >> t; // comment this if single test case

    while (t--) {
        solve();
    }

    return 0;
}
