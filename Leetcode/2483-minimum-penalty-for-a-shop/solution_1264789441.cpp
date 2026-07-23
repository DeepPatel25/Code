class Solution {
public:
    int bestClosingTime(string customers) {
        int countY = 0, countN = 0;
        int size = customers.size();

        // Count total 'Y' in the string
        for(char c : customers) {
            if(c == 'Y') countY++;
        }

        int minPenalty = countY; // Initial penalty when closed at time 0
        int idx = 0;

        // Calculate the penalty for each possible closing time
        for(int i = 0; i < size; i++) {
            if(customers[i] == 'Y') {
                countY--;
            } else {
                countN++;
            }

            int currentPenalty = countY + countN;
            if(currentPenalty < minPenalty) {
                minPenalty = currentPenalty;
                idx = i + 1;
            }
        }

        return idx;
    }
};
