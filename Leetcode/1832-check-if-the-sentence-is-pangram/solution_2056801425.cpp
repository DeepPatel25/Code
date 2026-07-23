class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> check(26, true);
        for (char c: sentence)
            check[c - 'a'] = false;

        for (bool b: check)
            if (b)
                return false;

        return true;
    }
};