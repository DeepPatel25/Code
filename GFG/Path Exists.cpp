class Solution {
  public:
    bool checkPath(int V, vector<vector<int>>& edges, int src, int dest) {
        queue<int> q;
        q.push(src);
        
        unordered_map<int, vector<int>> mp;
        
        for (auto edge: edges) {
            mp[edge[0]].push_back(edge[1]);
            mp[edge[1]].push_back(edge[0]);
        }
        
        vector<bool> visited(V, false);
        visited[src] = true;
        
        while (!q.empty()) {
            int s = q.front();
            q.pop();
            
            if (s == dest)
                return true;
            
            visited[s] = true;
            
            for (int d: mp[s]) {
                if (!visited[d]) {
                    q.push(d);
                }
            }
        }
        
        return false;
    }
};

