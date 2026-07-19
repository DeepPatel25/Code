class Solution {
public:
    char findTheDifference(string s, string t) {
        // unordered_map<char, int> mp;

        // for(char ch: s) {
        //     mp[ch]++;
        // }

        // for(char ch: t) {
        //     mp[ch]--;

        //     if(mp[ch] == -1) {
        //         return ch;
        //     }
        // }

        // return 'a';

        int sum_s = 0, sum_t = 0;

        for(char &ch: s)
            sum_s += ch;

        for (char &ch: t)
            sum_t += ch;
        
        return (char)(sum_t - sum_s);
    }
};