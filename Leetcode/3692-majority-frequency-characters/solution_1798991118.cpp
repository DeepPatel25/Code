class Solution {
public:
    string majorityFrequencyGroup(string s) {
        int freq[26] = {};
        for (char c : s)
            freq[c - 'a']++;
        int unique[101] = {}, maj = 1;
        for (int i = 0; i < 26; i++) {
            if (freq[i] == 0) continue;
            if (++unique[freq[i]] > unique[maj] || (unique[freq[i]] == unique[maj] && freq[i] > maj))
                maj = freq[i];
        }

        string res = "";
        for (int i = 0; i < 26; i++)
            if (freq[i] == maj)
                res.push_back((char)i + 'a');
        
        return res;
    }
};