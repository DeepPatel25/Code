class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int n = target.size(), sum = target[0];

        for (int i = 0; i < n - 1; i++) {
            if (target[i + 1] > target[i]) {
                sum += target[i + 1] - target[i];
            }
        }

        return sum;
    }
};