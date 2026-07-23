class Solution {
public:
    int smallestNumber(int n) {
        int i = 1;

        while((pow(2, i) - 1) < n) {
            i++;
        }

        return pow(2, i) - 1;
    }
};