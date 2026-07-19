class Solution {
public:
    string reformatNumber(string number) {
        int numCount = 0;
        
        for (char ch: number) {
            if (ch >= '0' && ch <= '9')
                numCount++;
        }

        string ans = "";
        for (int i = 0; i < number.size();) {
            if (number[i] >= '0' && number[i] <= '9') {
                int div = numCount / 3, rem = numCount % 3;
                int size = 3;

                if ((div == 1 && rem == 1) || (div == 0 && rem == 2))
                    size = 2;

                while (size > 0) {
                    if (number[i] >= '0' && number[i] <= '9') {
                        ans += number[i];
                        size--;
                        numCount--;
                    }
                    i++;
                }

                if (numCount > 0) ans += '-';
            } else {
                i++;
            }
        }

        return ans;
    }
};