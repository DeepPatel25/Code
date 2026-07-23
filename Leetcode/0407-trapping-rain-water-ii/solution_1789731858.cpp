class Solution {
private:
    class Cell {
        int height, row, col;
        
        public:
            Cell(int h, int r, int c) : height(h), row(r), col(c) { }
            int getHeight() { return height; }
            int getRow() { return row; }
            int getCol() { return col; }
            bool operator<(const Cell& other) const { return height > other.height; }

    };
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
        int row = heightMap.size(), cols = heightMap[0].size(), water = 0;
        vector<vector<bool>> visited(row, vector<bool>(cols, false));
        priority_queue<Cell> pq;

        for (int i = 0; i < row; i++) { 
            pq.push(Cell(heightMap[i][0], i, 0));
            pq.push(Cell(heightMap[i][cols - 1], i, cols - 1));
            visited[i][0] = visited[i][cols - 1] = true;
        }

        for (int j = 0; j < cols; j++) {
            pq.push(Cell(heightMap[0][j], 0, j));
            pq.push(Cell(heightMap[row - 1][j], row - 1, j));
            visited[0][j] = visited[row - 1][j] = true;
        }

        int dR[4] = {0, 0, -1, 1 }, dC[4] = {-1, 1, 0, 0 };
        while(!pq.empty()) {
            Cell curr = pq.top(); pq.pop();

            for(int d = 0; d < 4; d++) {
                int r = curr.getRow() + dR[d], c = curr.getCol() + dC[d];

                if (r >= 0 && c >= 0 && r < row && c < cols && !visited[r][c]) {
                    water += max(0, curr.getHeight() - heightMap[r][c]);
                    pq.push(Cell(max(heightMap[r][c], curr.getHeight()), r, c));
                    visited[r][c] = true;
                }
            }
        }

        return water;
    }
};