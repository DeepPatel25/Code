class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count = 0;

        while(n) {
            if(n & 1 == 1) count++;
            if(count > 1) return false;
            n >>= 1;
        }

        return count == 1;
    }
};