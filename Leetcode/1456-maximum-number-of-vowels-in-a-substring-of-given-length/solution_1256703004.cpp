class Solution {
public:
    int isVowel(char ch) {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            return 1;
        }

        return 0;
    }

    int maxVowels(string s, int k) {
        int count = 0, maxi = 0;

        for(int i = 0; i < k; i++) {
            count += isVowel(s[i]);
            if(count > maxi) maxi = count;
        }

        for(int i = k; i < s.length(); i++) {
            count = count - isVowel(s[i - k]) + isVowel(s[i]);
            if(count > maxi) maxi = count;
        }

        return maxi;
    }
};