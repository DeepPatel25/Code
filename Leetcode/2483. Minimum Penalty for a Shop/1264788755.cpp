class Solution {
public:
    int bestClosingTime(string customers) {
        int countY = 0, countN = 0;
        int size = customers.size();

        for(int i = 0; i < size; i++) {
            if(customers[i] == 'Y') countY++;
        }

        int j = 0;
        int mini = INT_MAX;
        int idx = 0;
        while(j <= size) {
            if(countY + countN < mini) {
                mini = countY + countN;
                idx = j;
            }

            if(j < size) {
                if(customers[j] == 'Y') {
                    countY--;
                } else {
                    countN++;
                }
            }
            j++;
        }

        return idx;
    }
};