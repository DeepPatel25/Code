#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Solve function
void solve() {
    int size, a;
    unordered_map<int, int> mp;
    
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> a;
        mp[a]++;
    }
    
    if (mp.size() == 1) {
        cout << "YES\n";
        return;
    } else if (mp.size() > 2) {
        cout << "NO\n";
        return;
    }
    
    int first = -1, second = -1;
    for (auto it: mp) {
        if (first == -1) {
            first = it.second;
        } else {
            second = it.second;
        }
    }
    
    if (abs(first - second) <= 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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
