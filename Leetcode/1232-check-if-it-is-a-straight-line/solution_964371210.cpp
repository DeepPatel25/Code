class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int points = coordinates.size();
        int xDiff = abs(coordinates[0][0] - coordinates[1][0]);
        int yDiff = abs(coordinates[0][1] - coordinates[1][1]);
        int curr_xDiff, curr_yDiff;

        for(int i = 2; i < points; i++){
            curr_xDiff = abs(coordinates[i][0] - coordinates[i - 1][0]);
            curr_yDiff = abs(coordinates[i][1] - coordinates[i - 1][1]);

            if((xDiff * curr_yDiff) != (yDiff * curr_xDiff)) return false;
        }

        return true;    
    }
};