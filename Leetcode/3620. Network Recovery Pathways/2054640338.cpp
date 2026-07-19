class Solution {
public:
    int findMaxPathScore(vector<vector<int>>& edges, vector<bool>& online, long long k) {
        unordered_map<int, vector<pair<int, int>>> mp;

        for (auto edge: edges) {
            int src = edge[0],
                dest = edge[1],
                cost = edge[2];
            
            mp[src].push_back({dest, cost});
        }

        // for (auto m: mp) {
        //     int src = m.first;
        //     cout << "Source :- " << src << endl;

        //     for (auto p: m.second) {
        //         cout << "Destination :- " << p.first << " Cost :- " << p.second << endl;
        //     }
        // }

        // source, cost, min edge
        queue<pair<int, pair<long long int, int>>> q;
        q.push({0, {0, INT_MAX}});

        int maxi = -1;
        while (!q.empty()) {
            auto val = q.front();
            int src = val.first,
                minEdge = val.second.second;
            
            long long int sum = val.second.first;
            q.pop();

            // cout << "Source :- " << src
               //  << " Minimum Edge :- " << minEdge
                // << " Cost :- " << sum << endl;

            for (auto m: mp[src]) {
                int dest = m.first,
                    cost = m.second;
                
                if (dest == online.size() - 1) {
                    if (online[dest] and sum + cost <= k) {
                        // cout << "Reached \n";
                        // cout << "Before :- " << maxi << endl;

                        maxi = max(min(minEdge, cost), maxi);
                        // cout << "After :- " << maxi << endl;
                    }
                    continue;
                }

                // cout << "Destination :- " << dest << " ans :- " << online[dest] << endl;
                if (online[dest] and sum + cost <= k) {
                    // cout << "Destination :- " << dest << " Costing :- " << (sum + cost) << " min edge :- " << min(cost, minEdge) << endl;

                    q.push({dest, {sum + cost, min(cost, minEdge)}});
                }
            }

            // cout << endl;
        }

        return maxi;
    }
};