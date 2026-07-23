class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int smallest = 101, secondSmallest = 101;

        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < smallest) {
                secondSmallest = smallest;
                smallest = prices[i];
            } else if(prices[i] >= smallest && prices[i] < secondSmallest) {
                secondSmallest = prices[i];
            }
        }

        int debtValue = money - smallest - secondSmallest;
        return ((debtValue) >= 0) ? debtValue : money;
    }
};