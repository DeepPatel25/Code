class Solution {
private:
    long long reverseInteger(int num) {
        long long reversed_num = 0;
        int original_num = num;

        // Handle the case where the number is negative
        // We reverse the absolute value and then apply the sign back later
        if (num < 0) {
            num = -num; 
        }

        while (num > 0) {
            int remainder = num % 10;
            reversed_num = reversed_num * 10 + remainder;
            num /= 10;
        }
        
        // Reapply the original sign
        if (original_num < 0) {
            reversed_num = -reversed_num;
        }

        // Check for overflow/underflow if the result must fit in a 32-bit int
        if (reversed_num > INT_MAX || reversed_num < INT_MIN) {
            return 0; // or handle error as needed
        }

        return reversed_num;
    }

public:
    bool isSameAfterReversals(int num) {
        long long reversed1 = reverseInteger(num);
        long long reversed2 = reverseInteger(reversed1);
        return num == reversed2;
    }
};