class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] == color) return image;

        int row = image.size();
        int col = image[0].size();
        int oldColor = image[sr][sc];
        image[sr][sc] = color;

        queue<pair<int, int>> q;
        q.push({sr, sc});

        vector<int> dx = {0, 1, 0, -1};
        vector<int> dy = {1, 0, -1, 0};

        while(!q.empty()) {
            pair<int, int> p = q.front();
            q.pop();

            for(int i = 0; i < 4; i++) {
                int x = p.first + dx[i];
                int y = p.second + dy[i];

                if(x >= 0 && x < row && y >= 0 && y < col && image[x][y] == oldColor) {
                    image[x][y] = color;
                    q.push({x, y});
                }
            }
        }

        return image;
    }
};