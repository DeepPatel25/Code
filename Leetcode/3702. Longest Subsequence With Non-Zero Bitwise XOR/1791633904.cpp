class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int totalXor = 0;
        bool allZero = true;

        for (int x : nums) {
            totalXor ^= x;
            if (x != 0) allZero = false;
        }

        if (allZero) return 0;       // all elements zero
        if (totalXor != 0) return n; // whole array works
        return n - 1;   
    }
};