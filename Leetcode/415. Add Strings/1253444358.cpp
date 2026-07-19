class Solution {
public:
    string addStrings(string num1, string num2) {
        int m = num1.length();
        int n = num2.length();

        int i = m - 1;
        int j = n - 1;

        int carry = 0;
        string ans = "";

        while(i >= 0 && j >= 0) {
            int a = num1[i] - '0';
            int b = num2[j] - '0';

            int sum = a + b + carry;

            if(sum > 9) {
                carry = 1;
                sum -= 10;
            } else {
                carry = 0;
            }

            ans = to_string(sum) + ans;
            i--; j--;
        }

        while(i >= 0) {
            int a = num1[i] - '0';
            int sum = a + carry;

            if(sum > 9) {
                carry = 1;
                sum -= 10;
            } else {
                carry = 0;
            }

            ans = to_string(sum) + ans;
            i--;
        }

        while(j >= 0) {
            int b = num2[j] - '0';
            int sum = b + carry;

            if(sum > 9) {
                carry = 1;
                sum -= 10;
            } else {
                carry = 0;
            }

            ans = to_string(sum) + ans;
            j--;
        }

        return ans;
    }
};