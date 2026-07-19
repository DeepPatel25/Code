class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        sort(coordinates.begin(), coordinates.end());
        int dx = abs(coordinates[0][0] - coordinates[1][0]);
        int dy = abs(coordinates[0][1] - coordinates[1][1]);

        for(int i = 0; i < coordinates.size() - 1; i++){
            if((dx != abs(coordinates[i][0] - coordinates[i + 1][0])) || 
                (dy != abs(coordinates[i][1] - coordinates[i + 1][1]))) {
                    return false;
                }
        }

        return true;
    }
};