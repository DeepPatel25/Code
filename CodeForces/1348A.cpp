#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Solve function
void solve() {
    int n;
    cin >> n;
    
    int pile1 = 1 << n;
    int pile2 = 0;
    
    for (int i = 1; i < n / 2; i++)
        pile1 += (1 << i);
    
    for (int i = n / 2; i < n; i++)
        pile2 += (1 << i);
    
    cout << abs(pile1 - pile2) << "\n";
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
