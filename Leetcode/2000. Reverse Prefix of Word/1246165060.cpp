class Solution {
public:
    int isCharExist(string word, char ch) {
        for(int i = 0; i < word.length(); i++) {
            if(word[i] == ch) {
                return i;
            }
        }

        return -1;
    }

    string reversePrefix(string word, char ch) {
        int index = isCharExist(word, ch);

        if(index == -1) {
            return word;
        }

        string ans = "";
        for(int i = 0; i <= index; i++) {
            ans = word[i] + ans;
        }

        for(int i = index + 1; i < word.length(); i++) {
            ans += word[i];
        }

        return ans;
    }
};