class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0, idx = 0, temp = 0;

        while(n != 0) {
            int rem = n % 10;
            if (rem != 0) {
                sum += rem;
                temp = rem * pow(10, idx) + temp;
                idx++;
            }
            
            n /= 10;
        }

        return sum * temp;
    }
};