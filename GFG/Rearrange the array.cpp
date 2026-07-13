class Solution {
  public:
    int minOperations(vector<int> &b) {
        const int mod = 1e9 + 7;
        int n = b.size();
        vector<bool> visited(n, false);
        unordered_map<int, int> mp;
        
        for (int i = 0; i < n; i++) {
            if (visited[i])
                continue;
            
            int curr = i, len = 0;
            
            while (!visited[curr]) {
                visited[curr] = true;
                curr = b[curr] - 1;
                len++;
            }
            
            int x = len;
            for (int p = 2; p * p <= x; p++) {
                if (x % p == 0) {
                    int cnt = 0;
                    while (x % p == 0) {
                        x /= p;
                        cnt++;
                    }
                    
                    mp[p] = max(mp[p], cnt);
                }
            }
            
            if (x > 1)
                mp[x] = max(mp[x], 1);
        }
        
        long long ans = 1;
        for (auto &it: mp) {
            long long base = it.first;
            int exp = it.second;
            
            while (exp--)
                ans = (ans * base) % mod;
        }
        
        return (int)ans;
    }
};
