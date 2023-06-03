class Solution {
public:
    unordered_map<int, vector<int>> adj;
    int ans = 0, maxi = 0;

    void dfs(int manager, vector<int> &informTime) {
        maxi = max(maxi, ans);

        for(auto employee : adj[manager]) {
            ans += informTime[manager];
            dfs(employee, informTime);
            ans -= informTime[manager];
        }
    }

    int numOfMinutes(int n, int headID, vector<int> &manager, vector<int> &informTime) {
        
        // Filling the Adjancancy List
        for(int i = 0; i < n; i++) {
            int val = manager[i];
            if(val != -1) {
                adj[val].emplace_back(i);
            }
        }

        // DFS for finding the Number of Minutes.
        dfs(headID, informTime);

        return maxi;
    }
};