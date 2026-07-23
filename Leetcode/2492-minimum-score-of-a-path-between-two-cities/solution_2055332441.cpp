class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        unordered_map<int, vector<pair<int, int>>> mp;
        int mini = INT_MAX, size = roads.size();
        vector<bool> visited(n + 1, false);
        queue<int> q;

        for (auto road: roads)
            mp[road[0]].push_back({road[1], road[2]});
        
        if (mp.find(1) != mp.end()) {
            visited[1] = true;

            for (auto it: mp[1]) {
                mini = min(mini, it.second);
                q.push(it.first);
            }
        }

        while (!q.empty()) {
            int val = q.front();
            q.pop();

            visited[val] = true;

            for (auto it: mp[val]) {
                if (!visited[it.first]) {
                    q.push(it.first);
                    mini = min(mini, it.second);
                } else {
                    if (it.second < mini) {
                        mini = it.second;
                    }
                }
            }
        }

        return mini;
    }
};