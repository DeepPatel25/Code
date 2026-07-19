class Solution {
public:
    int minimumPushes(string word) {
        int i = 1;
        int size = word.size();
        int count = 0;

        while(size > 0) {
            if (size > 8) {
                size -= 8;
                count += (8 * i);
                i++;
            } else {
                count += (size * i);
                size = 0;
            }
        }

        return count;
    }
};