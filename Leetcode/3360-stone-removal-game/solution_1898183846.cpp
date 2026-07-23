class Solution {
public:
    bool canAliceWin(int n) {
        bool ans = false;
        int removeCount = 10;

        while (removeCount <= n) {
            n -= removeCount;
            removeCount--;
            ans = !ans;
        }

        return ans;
    }
};