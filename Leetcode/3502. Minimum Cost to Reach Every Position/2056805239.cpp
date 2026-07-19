class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int> ans(cost.size(), 0);
        ans[0] = cost[0];

        for (int i = 1; i < cost.size(); i++) {
            if (ans[i - 1] < cost[i])
                ans[i] = ans[i - 1];
            else
                ans[i] = cost[i];
        }

        return ans;
    }
};