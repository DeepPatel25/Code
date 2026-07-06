#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Solve function
void solve() {
    string a;
    cin >> a;
    
    int cnt = 0;
    for (char c: a) {
        if (c == 'A')
            cnt++;
        else
            cnt--;
    }
    
    if (cnt > 0)
        cout << "A\n";
    else
        cout << "B\n";
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