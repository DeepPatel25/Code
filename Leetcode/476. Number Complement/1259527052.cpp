class Solution {
public:
    int findComplement(int num) {
        string ans = "";
        
        while(num != 0) {
            if(num % 2 == 0) ans = "1" + ans;
            else ans = "0" + ans;
            num >>= 1;
        }

        int number = 0;
        int powIndex = 0;
        for(int i = ans.size() - 1; i >= 0; i--) {
            if(ans[i] == '1') {
                number += pow(2, powIndex);
            }

            powIndex++;
        }

        return number;
    }
};