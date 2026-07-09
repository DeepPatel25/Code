#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Solve function
void solve() {
    int col;
    string a, b;
    bool isValid = true;
    
    cin >> col >> a >> b;
    
    for (int i = 0; i < col; i++) {
        if ((a[i] == b[i]) or (a[i] == 'B' and b[i] == 'G') or (a[i] == 'G' and b[i] == 'B'))
            continue;
        else {
            isValid = false;
            break;
        }
    }
    
    if (isValid)
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
