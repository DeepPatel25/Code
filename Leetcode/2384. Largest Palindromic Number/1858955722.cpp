class Solution {
public:
    string largestPalindromic(string num) {
        int n = num.size();
        vector<int> count(10, 0);

        for (int i = 0; i < n; i++)
            count[num[i] - '0']++;
        
        string res = "";
        for (int i = 9; i >= 0; i--) {
            if (i == 0 && res.size() == 0)
                continue;
            
            int x = count[i];
            if (x > 0) {
                x /= 2;
                count[i] -= 2 * x;
                
                while(x-- > 0)
                    res.push_back('0' + i);
            }
        }

        string temp = res;
        for (int i = 9; i >= 0; i--) {
            if (count[i] == 1) {
                res.push_back('0' + i);
                break;
            }
        }

        reverse(temp.begin(), temp.end());
        res += temp;

        return res.size() > 0 ? res : "0";
    }
};