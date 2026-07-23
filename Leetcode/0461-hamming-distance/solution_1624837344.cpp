class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;

        while(x != 0 || y != 0) {
            int rem1 = x & 1, rem2 = y & 1;

            if(rem1 != rem2)
                count++;

            x >>= 1;
            y >>= 1;
        }

        return count;
    }
};