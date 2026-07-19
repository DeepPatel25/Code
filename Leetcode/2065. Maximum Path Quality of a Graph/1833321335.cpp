class Solution {
private:
    void dfs(vector<vector<pair<int, int>>>& graph, vector<int>& values, vector<int>& visited, int& res, int node, int score, int time, int& maxTime) {
        if (time > maxTime)
            return;
        
        if (visited[node] == 0)
            score += values[node];
        
        visited[node]++;

        if (node == 0)
            res = max(res, score);
        
        for (auto it: graph[node]) {
            int neigh = it.first;
            int newTime = time + it.second;
            dfs(graph, values, visited, res, neigh, score, newTime, maxTime);
        }

        visited[node]--;
    }

public:
    int maximalPathQuality(vector<int>& values, vector<vector<int>>& edges, int maxTime) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

        int n = values.size(), res = values[0];
        vector<vector<pair<int, int>>> graph(n);

        for (int i = 0; i < edges.size(); i++) {
            graph[edges[i][0]].push_back({edges[i][1], edges[i][2]});
            graph[edges[i][1]].push_back({edges[i][0], edges[i][2]});
        }

        vector<int> visited(n, 0);
        dfs(graph, values, visited, res, 0, 0, 0, maxTime);
        return res;
    }
};