#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Solve function
void solve() {
    int x, k;
    cin >> x >> k;
    
    if (x % k == 0) {
        cout << "2\n" << x - 1 << " " << "1\n";
    } else {
        cout << "1\n" << x << endl;
    }
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
