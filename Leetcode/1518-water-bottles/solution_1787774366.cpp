class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        // Set numBottles because these many water bottles are already full so user can drink it.
        int ans = numBottles;

        // check if number of bottles can be greater than or equal to exchange then run loop
        while(numBottles >= numExchange) {
            // temp value is that filled bottles you can get in the exchange of empty bottles
            int temp = numBottles / numExchange;
            
            // add new fill bottle value into answer value
            ans += temp;

            // update new filled + water bottle count
            numBottles = temp + (numBottles % numExchange);
        }

        // return how many filled water bottles you can drink.
        return ans;
    }
};