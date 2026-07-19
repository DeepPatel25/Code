class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n;
        int sum = 0, prod = 1;

        while(temp) {
            int rem = temp % 10;
            sum += rem;
            prod *= rem;
            temp /= 10;
        }

        return (n % (sum + prod)) == 0;
    }
};