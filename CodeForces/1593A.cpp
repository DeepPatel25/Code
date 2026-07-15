#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Solve function
void solve() {
    long long int a, b, c;
    cin >> a >> b >> c;
    
    long long A = a > max(b, c) ? 0: max(b, c) - a + 1;
    long long B = b > max(c, a) ? 0: max(c, a) - b + 1;
    long long C = c > max(a, b) ? 0: max(a, b) - c + 1;
    
    cout << A << " " << B << " " << C << endl;
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
