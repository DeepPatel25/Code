class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int> visitCount(n, 0);
        int index = 0;
        int step = 1;

        // Simulate the game
        while (true) {
            visitCount[index]++;
            if (visitCount[index] > 1) break;
            index = (index + step * k) % n;
            step++;
        }

        // Find all players who have never been landed on
        vector<int> losers;
        for (int i = 0; i < n; ++i) {
            if (visitCount[i] == 0) {
                losers.push_back(i + 1);
            }
        }

        return losers;
    }
};
