class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int sum = target[0];

        for (int i = 0; i < target.size() - 1; i++) {
            if (target[i + 1] > target[i]) {
                sum += target[i + 1] - target[i];
            }
        }

        return sum;
    }
};