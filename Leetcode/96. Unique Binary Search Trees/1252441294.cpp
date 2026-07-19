class Solution {
public:
    int numTrees(int n) {
        if(n == 1 || n == 2) return n;

        vector<int> ans(n + 1, 0);
        ans[1] = 1;
        ans[2] = 2;

        for(int i = 3; i <= n; i++) {
            for(int j = i - 1; j > 0; j--) {
                if(j == 1) {
                    ans[i] += ans[j];
                } else {
                    ans[i] += (2 * ans[j]);
                }
            }
        }

        return ans[n];
    }
};