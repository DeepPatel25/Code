class Solution {
private:
    int target;
    vector<vector<int>> adjList;
    vector<int> visited;

    double dfs(int node, int t) {
        if (((node != 1 && adjList[node].size() == 1) || t == 0))
            return node == target ? 1.0 : 0.0;

        visited[node] = true;
        double res = 0;
        for (int nei : adjList[node]) {
            if (!visited[nei]) res += dfs(nei, t - 1);
        }

        int availableMoves = adjList[node].size() - (node != 1);
        return res / availableMoves;
    }

public:
    double frogPosition(int n, vector<vector<int>>& edges, int t, int target) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        if (n == 1 && t == 1 && target == 1) return 1.0;

        this->target = target;
        adjList.assign(n + 1, {});
        visited.assign(n + 1, false);

        for (auto &e : edges) {
            adjList[e[0]].push_back(e[1]);
            adjList[e[1]].push_back(e[0]);
        }

        return dfs(1, t);
    }
};
