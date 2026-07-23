#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Solve function
void solve() {
    int n, k, count = 0;
    cin >> n >> k;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr.begin(), arr.end());
    for (int i = 2; i < n; i += 3) {
        int maxi = max({arr[i - 2], arr[i - 1], arr[i]});
        
        if (maxi < 5 and (5 - maxi) >= k)
            count++;
    }
    
    cout << count << endl;
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
