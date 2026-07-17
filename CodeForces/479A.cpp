#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Solve function
void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int first2 = max(a + b, a * b);
    int last2 = max(b + c, b * c);
    int maxi = max({first2 + c, first2 * c, a + last2, a * last2});
    cout << maxi << endl;
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
