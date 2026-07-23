class Solution {
public:
    int findMaxPathScore(vector<vector<int>>& edges, vector<bool>& online, long long k) {
        int n = online.size();

        unordered_map<int, vector<pair<int, int>>> mp;
        vector<int> indegree(n, 0);

        int maxEdge = 0;

        for (auto &e: edges) {
            int u = e[0],
                v = e[1],
                w = e[2];
            
            mp[u].push_back({v, w});
            indegree[v]++;
            maxEdge = max(maxEdge, w);
        }

        // Topological order
        queue<int> q;
        vector<int> topo;

        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0)
                q.push(i);
        }

        while (!q.empty()) {
            int u = q.front();
            q.pop();
            topo.push_back(u);

            for (auto &x: mp[u]) {
                if (--indegree[x.first] == 0)
                    q.push(x.first);
            }
        }

        auto check = [&](int limit) {
            vector<long long> dist(n, LLONG_MAX);
            dist[0] = 0;

            for (int u: topo) {
                if (dist[u] == LLONG_MAX)
                    continue;
                
                if (u != 0 and u != n - 1 && !online[u])
                    continue;
                
                for (auto &x: mp[u]) {
                    int v = x.first,
                        w = x.second;
                    
                    if (w < limit)
                        continue;
                    
                    if (v != n - 1 and !online[v])
                        continue;
                    
                    dist[v] = min(dist[v], dist[u] + (long long)w);
                }
            }

            return dist[n - 1] <= k;
        };

        int low = 0, 
            high = maxEdge, 
            ans = -1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (check(mid)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};