class Solution {
public:
    static bool compare(int a, int b) {
        int bitCountA = __builtin_popcount(a);
        int bitCountB = __builtin_popcount(b);

        return bitCountA == bitCountB ? a < b : bitCountA < bitCountB;
    }

    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compare);
        return arr;
    }
};