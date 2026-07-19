class Solution {
public:
    int findClosest(int x, int y, int z) {
        int first = abs(z - x), second = abs(z - y);
        return first < second ? 1 : first > second ? 2 : 0;
    }
};