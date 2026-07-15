#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Solve function
void solve() {
    vector<int> arr(4, 0);
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    
    int final1 = max(arr[0], arr[1]), final2 = max(arr[2], arr[3]);
    sort(arr.begin(), arr.end());
    
    if (max(final1, final2) == arr[3] and min(final1, final2) == arr[2])
        cout << "YES\n";
    else
        cout << "NO\n";
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
