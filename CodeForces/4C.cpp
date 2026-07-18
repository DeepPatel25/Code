#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Solve function
void solve() {
    int n;
    string s;
    unordered_map<string, int> mp;
    
    cin >> n;
    
    while (n--) {
        cin >> s;
        
        if (mp.find(s) != mp.end())
            cout << s << mp[s] << endl;
        else
            cout << "OK" << endl;
        
        mp[s]++;
    }
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
