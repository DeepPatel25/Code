class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        if (n == 1 || n == 2) return n;

        int p = 4;
        while (n >= p)
            p *= 2;

        return p;
    }
};