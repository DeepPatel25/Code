#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Solve function
void solve() {
    string s;
    cin >> s;

    int cnt4 = 0;
    int non4 = 0;

    const int NEG = -1000000000;
    int dp0 = 0;
    int dp1 = NEG;

    for (char c : s) {
        if (c == '4') {
            cnt4++;
            continue;
        }

        non4++;

        int ndp0 = dp0;
        int ndp1 = dp1;

        if (c == '2') {
            ndp0 = dp0 + 1;
        } else { // '1' or '3'
            ndp1 = max(dp1, dp0) + 1;
        }

        dp0 = ndp0;
        dp1 = ndp1;
    }

    int keep = max(dp0, dp1);
    int ans = cnt4 + (non4 - keep);

    cout << ans << "\n";
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
