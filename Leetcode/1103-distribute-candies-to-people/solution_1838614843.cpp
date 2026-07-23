class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people, 0);
        int i = 1, idx = 0;

        while(candies > 0) {
            ans[idx] += min(i, candies);
            if (candies >= i) candies -= i;
            else candies = 0;
            i++; idx = (idx + 1) % num_people;
        }

        return ans;
    }
};