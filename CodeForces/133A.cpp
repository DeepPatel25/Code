#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Solve function
void solve() {
    string s;
    bool isPrint = false;
    
    cin >> s;
    
    for (char& c: s) {
        if (c == 'H' || c == 'Q' || c == '9') {
            isPrint = true;
            break;
        }
    }
    
    if (isPrint)
        cout << "YES\n";
    else
        cout << "NO\n";
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
