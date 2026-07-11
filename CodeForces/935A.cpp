#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Solve function
void solve() {
    int n, start = 1, rem, count = 0;
    cin >> n;
    
    rem = n - 1;
    while (start <= rem) {
        if (rem % start == 0) {
            count++;
        }
        
        start++;
        rem--;
    }
    
    cout << count << endl;
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
