class Solution {
public:
    void dfs(int src, int &count, vector<int> &vis, vector<int> adj[]){
        vis[src] = 1;
        count++;

        for(int x: adj[src])
            if(vis[x] == 0)
                dfs(x, count, vis, adj);
    }

    int maximumDetonation(vector<vector<int>>& bombs) {
        int n = bombs.size();
        vector<int> adj[n];

        for(int i = 0; i < n; i++){
            long long x1 = bombs[i][0];
            long long y1 = bombs[i][1];
            long long r1 = bombs[i][2];

            for(int j = 0; j < n; j++){
                if(i != j){
                    long long x2 = bombs[j][0];
                    long long y2 = bombs[j][1];
                    long long r2 = bombs[j][2];

                    long long ds = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);

                    if(ds <= r1 * r1)
                        adj[i].push_back(j);                    
                }
            }
        }

        vector<int> vis(n);
        int ans = 0;

        for(int i = 0; i < n; i++){
            int count = 0;
            dfs(i, count, vis, adj);
            ans = max(ans, count);
            fill(vis.begin(), vis.end(), 0);
        }

        return ans;
    }
};