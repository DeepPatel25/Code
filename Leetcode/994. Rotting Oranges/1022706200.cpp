class Solution {
public:
    int orangesRotting(vector<vector<int>>& arr) {
        queue<pair<pair<int, int>, int>> q;

        for(int i = 0; i < arr.size(); i++) {
            for(int j = 0; j < arr[i].size(); j++) {
                if(arr[i][j] == 2) {
                    q.push({{i, j}, 0});
                }
            }
        }

        int ansTime = 0;

        while(!q.empty()) {
            auto node = q.front();
            q.pop();

            int x = node.first.first;
            int y = node.first.second;
            int time = node.second;

            int dx[] = {-1, 0, 1, 0};
            int dy[] = {0, 1, 0, -1};

            for(int i = 0; i < 4; i++) {
                int newX = x + dx[i];
                int newY = y + dy[i];

                if(newX >= 0 && newX < arr.size() && newY >= 0 && newY < arr[0].size()
                && arr[newX][newY] == 1) {
                    pair<int, int> newCor = make_pair(newX, newY);
                    q.push({newCor, time + 1});

                    ansTime = max(ansTime, time + 1);
                    arr[newX][newY] = 2;
                }
            }
        }

        for(int i = 0; i < arr.size(); i++) {
            for(int j = 0; j < arr[0].size(); j++) {
                if(arr[i][j] == 1) {
                    return -1;
                }
            }
        }

        return ansTime;
    }
};