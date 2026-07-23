class Solution {
public:
    bool judgeCircle(string moves) {
        int i = 0, j = 0;

        for(int k = 0; k < moves.size(); k++) {
            switch(moves[k]){
                case 'U':
                    i--;
                    break;
                case 'D':
                    i++;
                    break;
                case 'L':
                    j--;
                    break;
                case 'R':
                    j++;
                    break;
            }
        }

        return (i == 0 && j == 0);
    }
};