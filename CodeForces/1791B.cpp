#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Solve function
void solve() {
    int size, x = 0, y = 0;
    string dir;
    bool isFound = false;
    
    cin >> size >> dir;
    for (int i = 0; i < size; i++) {
        if (dir[i] == 'L')
            x--;
        else if (dir[i] == 'R')
            x++;
        else if (dir[i] == 'U')
            y++;
        else
            y--;
        
        if (x == 1 and y == 1) {
            isFound = true;
            break;
        }
    }
    
    if (isFound)
        cout << "YES\n";
    else
        cout << "NO\n";
}

// Main function
int main() {
    fastio();

    int t = 1;
    cin >> t; // comment this if single test case

    while (t--) {
        solve();
    }

    return 0;
}
