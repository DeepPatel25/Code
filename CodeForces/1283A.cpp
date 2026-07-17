#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int h, m;
        cin >> h >> m;
        
        int min = ((23 - h) * 60) + (60 - m);
        cout << min << endl;
    }
    
    return 0;
}