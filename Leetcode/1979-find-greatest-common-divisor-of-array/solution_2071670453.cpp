class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max = INT_MIN, min = INT_MAX;
        for (int& i : nums) {
            min = ::min(min, i);
            max = ::max(max, i);
        }

        return ::gcd(max, min);
    }
};