class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        int ans = 0, x = 1;
        while (num1 || num2 || num3) {
            int min_digit = min(num1 % 10, num2 % 10);
            min_digit = min(num3 % 10, min_digit);
            ans += x * min_digit;
            x *= 10;
            num1 /= 10; num2 /= 10; num3 /= 10;
        }

        return ans;
    }
};