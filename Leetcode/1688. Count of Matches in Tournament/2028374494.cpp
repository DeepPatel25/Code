class Solution {
public:
    int numberOfMatches(int n) {
        int count = 0;

        while (n != 1) {
            if (n % 2 == 1) {
                n--;
                count++;           
            }

            count += n / 2;
            n /= 2;
        }

        return count;
    }
};