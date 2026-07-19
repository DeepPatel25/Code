class Solution {
public:
    bool isTrionic(vector<int>& arr) {
        int points = 0;
        bool isIncr = true;

        if (arr[0] >= arr[1])
            return false;

        for (int i = 0; i < arr.size() - 1; i++) {
            if (isIncr) {
                if (arr[i] > arr[i + 1]) {
                    isIncr = false;
                    points++;
                }
            } else {
                if (arr[i] < arr[i + 1]) {
                    isIncr = true;
                    points++;
                }
            }
        }

        return points == 2;
    }
};