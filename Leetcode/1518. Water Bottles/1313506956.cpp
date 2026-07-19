class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = 0;
        int curr_full = numBottles;
        int curr_empty = 0;

        while(curr_full) {
            total += curr_full;
            curr_empty += curr_full;

            curr_full = 0;
            curr_full += (curr_empty / numExchange);
            curr_empty %= numExchange;
        }

        return total;
    }
};