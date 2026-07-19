class Solution {
public:
    int gcd_of_list(const std::vector<int>& numbers) {
        return std::accumulate(numbers.begin(), numbers.end(), numbers[0], std::gcd<int, int>);
    }

    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int gcdOfArray = gcd_of_list(numsDivide);
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++) {
            if(gcdOfArray % nums[i] == 0) {
                return i;
            }
        }

        return -1;
    }
};