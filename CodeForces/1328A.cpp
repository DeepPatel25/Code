#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int a, b;
        cin >> a >> b;
        
        int div = a % b;
        
        if (div == 0) {
            cout << div << endl;
        } else {
            int ans = b - (a % b);
            cout << ans << endl;
        }
    }
    
    return 0;
}   