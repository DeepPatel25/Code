class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans(n, 0);

        if (k == 0)
            return ans;
        
        int sum = 0;
        if (k > 0) {
            for (int i = 1; i <= k; i++)
                sum += code[i % n];
            
            ans[0] = sum;

            for (int i = 1; i < n; i++) {
                sum = sum - code[i % n] + code[(i + k) % n];
                ans[i] = sum;
            }
        } else {
            k = -k;
            
            for (int i = 0; i < k; i++)
                sum += code[(n - i - 1) % n];
            
            ans[0] = sum;

            for (int i = 1; i < n; i++) {
                sum = sum - code[(n - k + (i - 1)) % n] + code[(i - 1) % n];
                ans[i] = sum;
            }
        }

        return ans;
    }
};