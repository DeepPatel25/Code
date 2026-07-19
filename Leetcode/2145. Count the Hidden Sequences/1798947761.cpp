class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        int ans = 0, n = differences.size();

        for(int i = lower; i <= upper; i++) {
            bool isValid = true;
            int temp = i;

            for(int j = 0; j < n; j++) {
                temp += differences[j];

                if (temp < lower || temp > upper) {
                    isValid = false;
                    break;
                }
            }

            if (isValid) ans++;
        }

        return ans;
    }
};