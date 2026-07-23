class Solution {
private:
    void reverse(string &s, int start, int end) {
        if (start > end) {
            return;
        }

        if(isEnglishLetter(s[start])) {
            if (isEnglishLetter(s[end])) {
                swap(s[start], s[end]);
                reverse(s, start + 1, end - 1);
            } else {
                reverse(s, start, end - 1);
            }
        } else {
            reverse(s, start + 1, end);
        }
    }

    bool isEnglishLetter(char ch) {
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
    }

public:
    string reverseOnlyLetters(string s) {
        reverse(s, 0, s.size() - 1);
        return s;
    }
};