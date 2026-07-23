class Solution {
public:
    int countDigits(int num) {
        int count = 0, temp = num;

        while (num) {
            int rem = num % 10;

            if (temp % rem == 0)
                count++;
            
            num /= 10;
        }

        return count;
    }
};