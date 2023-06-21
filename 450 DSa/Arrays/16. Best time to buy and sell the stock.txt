class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int mini = prices[0];

        for(int i = 1; i < prices.size(); i++){
            int cost = prices[i] - mini;
            if(cost > profit) profit = cost;
            if(prices[i] < mini) mini = prices[i];
        }

        return profit;
    }
};