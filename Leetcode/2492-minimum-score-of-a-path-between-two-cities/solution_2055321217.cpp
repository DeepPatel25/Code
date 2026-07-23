class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        int mini = INT_MAX,
            size = roads.size();

        for (int i = 0; i < size; i++) {
            mini = min(mini, roads[i][2]);
        }

        return mini;
    }
};