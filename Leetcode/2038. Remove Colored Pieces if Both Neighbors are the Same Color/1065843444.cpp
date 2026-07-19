class Solution {
public:
    bool CheckBothSide(string colors, int index) {
        if(colors[index] == colors[index - 1] && colors[index] == colors[index + 1]) {
            return true;
        }

        return false;
    }

    bool winnerOfGame(string colors) {
        int aliceChance = 0;
        int bobChance = 0;
        int size = colors.size();

        for(int i = 1; i < size - 1; i++) {
            if(colors[i] == 'A') {
                if(CheckBothSide(colors, i)) {
                    aliceChance++;
                }
            } else if(colors[i] == 'B') {
                if(CheckBothSide(colors, i)) {
                    bobChance++;
                }
            }
        }

        return aliceChance > bobChance;
    }
};