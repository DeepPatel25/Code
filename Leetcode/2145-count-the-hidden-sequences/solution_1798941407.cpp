class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        return (upper - lower + 1) - (differences.size() + 1);
    }
};