class Solution {
public:
    void dfs(int src, int len, vector<vector<int>>& isConnected, vector<bool>& visited) {
        visited[src] = true;

        for(int neighbor = 0; neighbor < len; neighbor++){
            if(isConnected[src][neighbor] == 1 && !visited[neighbor]) {
                dfs(neighbor, len, isConnected, visited);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int count = 0;
        vector<bool> visited(n, false);

        for(int i = 0; i < n; i++) {
            if(!visited[i]) {
                count++;
                dfs(i, n, isConnected, visited);
            }
        }

        return count;
    }
};