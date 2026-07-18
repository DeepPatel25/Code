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
    
    int maxi = 1, seg = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i - 1] <= arr[i])
            seg++;
        else
            seg = 1;
        
        maxi = max(maxi, seg);
    }
    
    cout << maxi << endl;
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
