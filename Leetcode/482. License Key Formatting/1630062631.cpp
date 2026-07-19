class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int lettersLen = s.length() - 3;
        int totalGroupCount = lettersLen % k;

        string ans = "";
        int j = 0;

        if(totalGroupCount > 0) {
            for(int i = 0; i < totalGroupCount; i++) {
                
                while(s[j] == '-')
                    j++;
                
                ans += toUpper(s[j++]);
            }

            ans += "-";
        }

        int groupSize = 0;
        for(; j < s.size(); j++) {
            while(s[j] == '-')
                j++;
            
            ans += toUpper(s[j]);
            groupSize++;

            if(j + 1 < s.size() && groupSize == k) {
                groupSize = 0;
                ans += "-";
            }
        }

        return ans;
    }

    char toUpper(char input) {
        if (input >= 'a' && input <= 'z') {
            input = input - 32; // Convert to uppercase using ASCII offset
        }
        return input;
    }
};