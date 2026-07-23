class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        for(int i = 1; i < flowerbed.size() - 1; i++) {
            if(flowerbed[i] == 0 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) {
                count++;
                i++;
            }
        }

        return count == n;
    }
};