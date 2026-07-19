class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> temp(n, false);

        queue<int> q;
        temp[0] = true;
        n--;

        for(int i = 0; i < rooms[0].size(); i++) {
            q.push(rooms[0][i]);
        }

        while(!q.empty()) {
            int val = q.front();
            q.pop();

            if(!temp[val]) {
                temp[val] = true;
                n--;
                for(int i = 0; i < rooms[val].size(); i++) {
                    q.push(rooms[val][i]);
                }
            }
        }

        return n == 0;
    }
};