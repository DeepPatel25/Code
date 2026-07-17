#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int count = t / 5;
    
    if (t % 5 != 0) {
        count++;
    }
    
    cout << count << endl;
    
    return 0;
}