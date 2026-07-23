class Solution {
public:
    int countVowelStrings(int n) {
        vector<int> prev = {5, 4, 3, 2, 1};

        for (int i = 1; i < n; i++) {
            vector<int> curr = {0, 0, 0, 0, 1};

            for (int j = 3; j >= 0; j--) {
                curr[j] = prev[j] + curr[j + 1];
            }

            prev = curr;
        }

        return prev[0];
    }
};