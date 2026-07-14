#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Solve function
void solve() {
    int n, a, ans = -1, found = 0;
    unordered_map<int, int> mp;
    cin >> n;
    
    while (n--) {
        cin >> a;
        if (!found)
            mp[a]++;
        
        if (!found && mp[a] == 3) {
            ans = a;
            found = 1;
        }
    }
    
    cout << ans << endl;
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
