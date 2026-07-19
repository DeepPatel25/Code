class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();

        for(int i = 0; i < n; i++) {
            if(gas[i] >= cost[i]) {
                int currentGas = gas[i] - cost[i];
                int currIndex = i + 1 % n;

                bool flag = true;
                while(currIndex != i) {
                    if(currentGas + gas[currIndex] >= cost[currIndex]) {
                        currIndex = currIndex + 1 % n;
                        currentGas += gas[currIndex] - cost[currIndex];
                    } else {
                        flag = false;
                        break;
                    }
                }

                if(flag) {
                    return i;
                }
            }
        }

        return -1;
    }
};