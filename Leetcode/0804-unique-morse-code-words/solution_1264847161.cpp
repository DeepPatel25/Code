class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morseCode = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_map<string, int> mp;
        for(string word: words) {
            string morse = "";
            for(char ch: word) {
                morse += morseCode[ch - 'a'];
            }

            mp[morse]++;
        }

        return mp.size();
    }
};