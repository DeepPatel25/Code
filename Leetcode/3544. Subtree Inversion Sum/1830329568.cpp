class Solution {
public:
    long long dp[2][52][50004];
    vector<vector<int>> adj;

    long long dfs(int node, int parent, int stepsFromLastInversion, int mul, int& k, vector<int>& nums) {
        int mulInd = (mul == 1) ? 1 : 0;

        if (stepsFromLastInversion > k) {
            stepsFromLastInversion = k;
        }

        if (dp[mulInd][stepsFromLastInversion][node] != LLONG_MIN)
            return dp[mulInd][stepsFromLastInversion][node];

        long long withInvert = LLONG_MIN, withoutInvert = LLONG_MIN;

        if (stepsFromLastInversion == k) {
            withInvert = -1LL * mul * nums[node];
            int newMul = (mul == -1) ? 1 : -1;

            for (auto &ngbr: adj[node]) {
                if (ngbr != parent)
                    withInvert += dfs(ngbr, node, 1, newMul, k, nums);
            }
        }

        withoutInvert = 1LL * mul * nums[node];
        for (auto& ngbr: adj[node]) {
            if (ngbr != parent) {
                withoutInvert += dfs(ngbr, node, stepsFromLastInversion + 1, mul, k, nums);
            }
        }

        return dp[mulInd][stepsFromLastInversion][node] = max(withInvert, withoutInvert);
    }

    long long subtreeInversionSum(vector<vector<int>>& edges, vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   
        int N = nums.size();
        adj.assign(N, {});

        for (auto& edge: edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }


        for (int m = 0; m < 2; m++) {
            for (int s = 0; s <= k; s++) {
                for (int node = 0; node <= N; node++) {
                    dp[m][s][node] = LLONG_MIN; 
                }
            }
        }

        return dfs(0, -1, k, 1, k, nums);
    }
};