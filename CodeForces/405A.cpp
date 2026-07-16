#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Solve function
void solve() {
    int n;
    cin >> n;
    
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr.begin(), arr.end());
    for (int i: arr)
        cout << i << " ";
    cout << endl;
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
