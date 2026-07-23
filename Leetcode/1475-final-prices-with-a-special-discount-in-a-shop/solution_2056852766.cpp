class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int size = prices.size();

        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (prices[j] <= prices[i]) {
                    prices[i] -= prices[j];
                    break;
                }
            }
        }

        return prices;
    }
};