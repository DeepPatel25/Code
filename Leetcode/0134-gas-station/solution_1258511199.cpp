class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0, totalCost = 0;
        int start = 0, tank = 0;

        for (int i = 0; i < gas.size(); i++) {
            totalGas += gas[i];
            totalCost += cost[i];
            tank += gas[i] - cost[i];
            if (tank < 0) { // If tank is negative, current start is not feasible
                start = i + 1; // update start to next index
                tank = 0; // reset tank
            }
        }

        // If the totalGas is less than totalCost, there's no solution
        // If start is greater than the number of stations, return -1
        return totalGas < totalCost ? -1 : start % gas.size();
    }
};
