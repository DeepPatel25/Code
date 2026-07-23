class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0;
        while (start or goal) {
            if ((start & 1) != (goal & 1))
                count++;
            
            start >>= 1;
            goal >>= 1;
        }

        return count;
    }
};