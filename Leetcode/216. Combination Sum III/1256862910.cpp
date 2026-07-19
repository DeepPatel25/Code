class Solution {
public:
    void solve(int index, set<vector<int>> &st, int k, int n, int sum, vector<int> &temp) {
        if(index > 9 || sum > n) return;

        for(int i = index; i < 10; i++) {
            temp.push_back(i);
            if(temp.size() == k) {
                if(sum + i == n) st.insert(temp);
            } else {
                solve(i + 1, st, k, n, sum + i, temp);
            }
            temp.pop_back();
            solve(i + 1, st, k, n, sum, temp);
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        int sum = k * (k + 1) / 2;
        
        if(k > n) {
            return {};
        }

        set<vector<int>> s;
        vector<int> temp;
        solve(1, s, k, n, 0, temp);

        vector<vector<int>> ans;
        for(auto it: s) {
            ans.push_back(it);
        }

        return ans;
    }
};