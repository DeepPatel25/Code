class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        purchaseAmount -= (purchaseAmount % 10 >= 5 ? ((-1) * (10 - (purchaseAmount % 10))) : (purchaseAmount % 10));
        cout << purchaseAmount << endl;
        return 100 - purchaseAmount;
    }
};