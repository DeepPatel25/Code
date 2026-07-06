#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Solve function
void solve() {
    string a;
    cin >> a;
    
    string b = a.substr(0, 2);
    
    for (int i = 3; i < a.size(); i += 2)
        b += a[i];
    
    cout << b << endl;
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