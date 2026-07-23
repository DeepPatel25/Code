class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int row = 0, col = 0;

        for (string& command: commands) {
            if (command == "LEFT")
                col--;
            else if (command == "RIGHT")
                col++;
            else if (command == "UP")
                row--;
            else
                row++;
        }

        return (row * n) + col;
    }
};