class Solution {
public:
    int differenceOfSums(int n, int m) {
        int notDivisible = 0, divisible = 0;

        for(int i = 1; i <= n; i++) {
            if(i % m != 0) notDivisible += i;
            else divisible += i;
        }

        return notDivisible - divisible;
    }
};