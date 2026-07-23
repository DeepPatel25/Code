class Solution {
private:
    void solve(int idx, int n, int k, vector<int> &temp, vector<vector<int>> &ans) {
        for(int i = idx; i <= n; i++) {
            temp.push_back(i);

            if(temp.size() == k) ans.push_back(temp);
            else solve(i + 1, n, k, temp, ans);

            temp.pop_back();
        }
    }

public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;

        solve(1, n, k, temp, ans);
        return ans;
    }
};