#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    t++;
    bool isNotValid = true;
    
    while (isNotValid) {
        int n = t;
        bool check = true;
        
        unordered_set<int> s;
    
        while (n) {
            int rem = n % 10;
            
            if (s.find(rem) != s.end()) {
                check = false;
                break;
            }
            
            s.insert(rem);
            n /= 10;
        }
        
        if (check) {
            isNotValid = false;
            break;
        }
        
        t++;
    }
    
    cout << t << endl;
    
    return 0;
}

bool check(int n) {
    
}