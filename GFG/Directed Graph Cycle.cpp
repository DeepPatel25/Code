class Solution {
  public:
    bool isCyclic(int V, vector<vector<int>> &edges) {
        vector<vector<int>> adj(V);
        vector<int> indegree(V);
        queue<int> q;
        int cnt = 0;
        
        for (auto &it: edges) {
            adj[it[0]].push_back(it[1]);
            indegree[it[1]]++;
        }
        
        for (int i = 0; i < V; i++) {
            if (indegree[i] == 0)
                q.push(i);
        }
        
        while (!q.empty()) {
            cnt++;
            
            int val = q.front();
            q.pop();
            
            for (auto &it: adj[val]) {
                indegree[it]--;
                if (indegree[it] == 0)
                    q.push(it);
            }
        }
        
        return (cnt != V);
    }
};
