class Solution {
public:
    int candy(vector<int>& ratings) {
        int size = ratings.size();
        vector<int> candyArr(size, 1);

        for(int i = 1; i < size; i++) {
            if(ratings[i] > ratings[i + 1]) candyArr[i]++;
        }

        for(int i = size - 2; i >= 0; i--) {
            if(ratings[i] > ratings[i + 1]) {
                candyArr[i] = max(candyArr[i], 2);
            }
        }

        int count = 0;
        for(int candies: candyArr) {
            count += candies;
        }

        return count;
    }
};