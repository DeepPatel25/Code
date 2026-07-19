class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0, cows = 0;

        vector<int> num(10);
        for(int i = 0; i < secret.size(); i++) {
            int s = secret[i] - '0';
            int g = guess[i] - '0';

            if(s == g) bulls++;
            else {
                if(num[s] < 0) cows++;
                if(num[g] > 0) cows++;
                num[s]++;
                num[g]--;
            }
        }

        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};