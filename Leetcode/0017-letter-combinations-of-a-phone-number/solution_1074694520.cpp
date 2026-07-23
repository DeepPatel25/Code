class Solution {
public:
    vector<string> phonePad = {"", "", "abc", "def", "ghi", "jkl", "mno",
                                "pqrs", "tuv", "wxyz"};

    void helper(int idx, string &digits, string temp, vector<string> &ans) {
        if(idx == digits.length()) {
            ans.push_back(temp);
            return;
        }

        int num = digits[idx] - '0';
        
        for(int i = 0; i < phonePad[num].length(); i++) {
            helper(idx + 1, digits, temp + phonePad[num][i], ans);
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.length() == 0) return {};
        
        vector<string> ans;
        helper(0, digits, "", ans);
        return ans;
    }
};