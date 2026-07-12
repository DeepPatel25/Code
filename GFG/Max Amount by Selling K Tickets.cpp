class Solution {
  public:
    int maxAmount(vector<int>& arr, int k) {
        const int MOD = 1000000007;
        priority_queue<int> pq;
        
        for (int x: arr)
            if (x > 0)
                pq.push(x);
                
        long long ans = 0;
        while (k-- and !pq.empty()) {
            int curr = pq.top();
            pq.pop();
            
            ans = (ans + curr) % MOD;
            curr--;
            
            if (curr > 0)
                pq.push(curr);
        }
        
        return (int)ans;
    }
};
