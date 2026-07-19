class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0, i = 1;
        for (char c: s)
            sum += (i++ * (26 - (c - 'a')));

        return sum;
    }
};