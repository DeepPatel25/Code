#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n, w;
    cin >> k >> n >> w;
    int total = 0;
    
    int i = 1;
    while (w--) {
        total += (i * k);
        i++;
    }
    
    if (total - n <= 0)
        cout << "0" << endl;
    else
        cout << (total - n) << endl;
    
    return 0;
}