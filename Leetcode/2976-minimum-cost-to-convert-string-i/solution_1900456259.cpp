class Solution {
public:
    void bfs(char source, unordered_map<char, vector<pair<char, int>>> &adj, vector<vector<int>> &dist) {
        queue<pair<int, int>> q;
        q.push({source, 0});

        while(!q.empty()) {
            int node = q.front().first;
            int cost = q.front().second;

            q.pop();

            for(auto it: adj[node]) {
                if(dist[source - 'a'][it.first - 'a'] > cost + it.second) {
                    dist[source - 'a'][it.first - 'a'] = cost + it.second;
                    q.push({it.first, cost + it.second});
                }
            }
        }
    }

    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        int n = original.size();
        unordered_map<char, vector<pair<char, int>>> adj;

        for(int i = 0; i < n; i++)
            adj[original[i]].push_back({changed[i], cost[i]});

        long long ans = 0;
        vector<vector<int>> dist(26, vector<int>(26, INT_MAX));
        for(auto it: original) {
            bfs(it, adj, dist);
        }

        for(int i = 0; i < source.size(); i++) {
            if(source[i] == target[i])
                continue;

            if(dist[source[i] - 'a'][target[i] - 'a'] == INT_MAX)
                return -1;

            ans += dist[source[i] - 'a'][target[i] - 'a'];
        }

        return ans;
    }
};