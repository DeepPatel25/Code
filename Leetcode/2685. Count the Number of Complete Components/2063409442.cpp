class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> mp(n, vector<int>());
        vector<bool> visited(n, false);
        unordered_set<int> s;
        int count = 0;

        // Make Graph
        for (const vector<int>& edge: edges) {
            mp[edge[0]].push_back(edge[1]);
            mp[edge[1]].push_back(edge[0]);
        }

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                queue<int> q;
                int countEdge = 0, countNode = 0;
                q.push(i);
                s.insert(i);

                while (!q.empty()) {
                    int node = q.front();
                    q.pop();

                    countNode++;
                    visited[node] = true;

                    for (const int& destNode: mp[node]) {
                        if (!visited[destNode]) {
                            if (s.find(destNode) == s.end()) {
                                q.push(destNode);
                                s.insert(destNode);
                            }
                            countEdge++;
                        }
                    }
                }

                int needEdge = (countNode * (countNode - 1)) / 2;
                if (needEdge == countEdge) {
                    count += 1;
                }
            }
        }

        return count;
    }
};