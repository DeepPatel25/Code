class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currHold = INT_MIN, currNotHold = 0;

        for(const int stockPrice: prices) {
            int prevHold = currHold, prevNotHold = currNotHold;

            currHold = max(prevHold, prevNotHold - stockPrice);
            currNotHold = max(prevNotHold, prevHold +  stockPrice);
        }

        return currNotHold;
    }
};