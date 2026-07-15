class Solution {
  public:
    int bitonic(vector<int> &arr) {
        int n = arr.size();
        vector<int> incr(n, 1), decr(n, 1);
        
        for (int i = 1; i < n; i++)
            if (arr[i] >= arr[i - 1])
                incr[i] = incr[i - 1] + 1;
        
        for (int i = n - 2; i >= 0; i--)
            if (arr[i] >= arr[i + 1])
                decr[i] = decr[i + 1] + 1;
            
        int ans = 1;
        for (int i = 0; i < n; i++)
            ans = max(ans, incr[i] + decr[i] - 1);
        
        return ans;
    }
};
