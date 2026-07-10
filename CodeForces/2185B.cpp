#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Solve function
void solve() {
    int n, a;
    cin >> n;
    
    int size = n, maxi = INT_MIN;
    
    while (n--) {
        cin >> a;
        if (a > maxi)
            maxi = a;
    }
    
    cout << (size * maxi) << endl;
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
