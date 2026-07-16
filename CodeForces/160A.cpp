#include <bits/stdc++.h>
using namespace std;

// Fast IO
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Solve function
void solve() {
    int n, sum = 0;
    cin >> n;
    
    vector<int> vi(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> vi[i];
        sum += vi[i];
    }
    
    sort(vi.begin(), vi.end());
    int secondCount = 0, secondSum = 0, j = n -1;
    while (secondSum <= sum and j >= 0) {
        secondSum += vi[j];
        sum -= vi[j];
        secondCount++;
        j--;
    }
    
    cout << secondCount << endl;
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
