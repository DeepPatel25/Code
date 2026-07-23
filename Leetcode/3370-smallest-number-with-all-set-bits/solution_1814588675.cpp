class Solution {
public:
    int smallestNumber(int n) {
        int i = 1;
        int powValue = pow(2, i) - 1;

        while(powValue < n) {
            powValue = pow(2, ++i) - 1;
        }

        return powValue;
    }
};