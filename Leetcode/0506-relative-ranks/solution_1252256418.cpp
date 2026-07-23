class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int, int> mp;
        int n = score.size();

        for(int i = 0; i < n; i++) {
            mp[score[i]] = i;
        }

        vector<string> ans(n, "");
        for(auto it: mp) {
            if(n > 3) {
                ans[it.second] = to_string(n);
            } else if(n == 3) {
                ans[it.second] = "Bronze Medal";
            } else if(n == 2) {
                ans[it.second] = "Silver Medal";
            } else if(n == 1) {
                ans[it.second] = "Gold Medal";
            }
            n--;
        }

        return ans;
    }
};