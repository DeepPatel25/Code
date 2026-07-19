class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;
        int fullBottles = 0;

        while(numBottles >= numExchange) {
            numBottles -= numExchange;
            numExchange++;

            ans++;
            numBottles++;
        }

        return ans;
    }
};