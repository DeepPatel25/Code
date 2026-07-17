#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;
    
    int count = 0;
    while (m >= 2) {
        count += n;
        m -= 2;
    }
    
    if (m == 1) count += (n / 2);
    cout << count << endl;
    
    return 0;
}