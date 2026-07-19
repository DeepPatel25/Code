#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    long long sumDigitDifferences(const vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return 0;

        string first_num = to_string(nums[0]);
        int num_digits = first_num.size();
        vector<vector<int>> digit_count(num_digits, vector<int>(10, 0));
        
        // Fill digit_count with the frequency of each digit in each position
        for (int num : nums) {
            string s = to_string(num);
            for (int i = 0; i < num_digits; ++i) {
                digit_count[i][s[i] - '0']++;
            }
        }

        long long total_sum = 0;

        // Calculate the total sum of digit differences
        for (int num : nums) {
            string s = to_string(num);
            for (int i = 0; i < num_digits; ++i) {
                int current_digit = s[i] - '0';
                for (int d = 0; d < 10; ++d) {
                    if (d != current_digit) {
                        total_sum += digit_count[i][d];
                    }
                }
            }
        }

        // Each pair is counted twice, so we need to divide by 2
        total_sum /= 2;

        return total_sum;
    }
};
