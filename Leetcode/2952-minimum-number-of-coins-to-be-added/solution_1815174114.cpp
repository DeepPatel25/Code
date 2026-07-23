/**
 * @brief Finds the minimum number of coins to be added so that any value up to the target 
 *        can be formed using the given coin denominations.
 *
 * The idea:
 *   - Sort the given coins.
 *   - Track the current maximum sum `reachable` that can be formed using existing coins.
 *   - If the next coin is larger than `reachable + 1`, we need to "add" a new coin of 
 *     denomination `reachable + 1` to fill the gap.
 *   - Continue until we can reach or exceed `target`.
 *
 * Time Complexity: O(n log n) due to sorting.
 * Space Complexity: O(1) — only constant extra space used.
 */

class Solution {
public:
    int minimumAddedCoins(vector<int>& coins, int target) {
        sort(coins.begin(), coins.end());

        long long reachable = 0;  // Maximum sum reachable with current coins
        int addedCoins = 0;        // Number of coins we need to add

        for (int coin : coins) {
            // If there's a gap before we can use this coin, fill it by adding new coins
            while (coin > reachable + 1) {
                long long newCoin = reachable + 1;
                reachable += newCoin;
                addedCoins++;

                // Stop early if we already reached or exceeded the target
                if (reachable >= target) return addedCoins;
            }

            // Use this coin to extend the reachable range
            reachable += coin;
            if (reachable >= target) return addedCoins;
        }

        // If target still not reached, keep adding new coins
        while (reachable < target) {
            long long newCoin = reachable + 1;
            reachable += newCoin;
            addedCoins++;
        }

        return addedCoins;
    }
};
