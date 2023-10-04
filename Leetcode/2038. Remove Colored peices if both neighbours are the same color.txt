class Solution {
public:
    bool winnerOfGame(string colors) {
        int aliceChance = 0;
        int bobChance = 0;
        int size = colors.size();

        for(int i = 1; i < size - 1; i++) {
            if(colors[i] == colors[i - 1] && colors[i] == colors[i + 1]) {
                if(colors[i] == 'A') {
                    aliceChance++;
                } else {
                    bobChance++;
                }
            }
        }

        return aliceChance > bobChance;
    }
};