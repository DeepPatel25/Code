class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        sort(pizzas.begin(), pizzas.end());
        int size = pizzas.size(), totalDays = size / 4, currentIdx = size - 1;
        long long maxTotalWeight = 0;

        for (int day = 1; day <= totalDays; day += 2)
            maxTotalWeight += pizzas[currentIdx--];
        
        currentIdx--;
        for (int day = 2; day <= totalDays; day += 2) {
            maxTotalWeight += pizzas[currentIdx];
            currentIdx -= 2;
        }

        return maxTotalWeight;
    }
};