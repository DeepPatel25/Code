#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Solve function
void solve() {
    int n, a, i = 1;
    cin >> n;
    
    unordered_map<int, int> mp1, mp2;
    while (n--) {
        cin >> a;
        mp1[a]++;
        mp2[a] = i++;
    }
    
    for (auto it: mp1) {
        if (it.second == 1) {
            cout << mp2[it.first] << endl;
        }
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
