class Solution {
  public:
    int minStepToReachTarget(vector<int>& knightPos, vector<int>& targetPos, int n) {
        int dx[] = {-2, -2, -1, 1, 2, 2, -1, 1};
        int dy[] = {1, -1, 2, 2, -1, 1, -2, -2};
        
        queue<pair<int, pair<int, int>>> q;
        q.push({0, {knightPos[0], knightPos[1]}});
        vector<vector<bool>> visited(n + 1, vector<bool>(n + 1, false));
        int mini = INT_MAX;
        visited[knightPos[0]][knightPos[1]] = true;
        
        while (!q.empty()) {
            auto it = q.front();
            q.pop();
  
            int count = it.first, x = it.second.first, y = it.second.second;
            
            if (x == targetPos[0] and y == targetPos[1]) {
                return count;
            }
            
            for (int i = 0; i < 8; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                
                if (isValid(nx, ny, n, visited)) {
                    q.push({count + 1, {nx, ny}});
                    visited[nx][ny] = true;
                }
            }
        }
        
        return mini;
    }
    
    bool isValid(int nx, int ny, int n, vector<vector<bool>>& visited) {
        if (nx < 1 or ny < 1 or nx > n or ny > n or visited[nx][ny])
            return false;
        
        return true;
    }
};
