class Solution {
public:
    
    // Function to check if str1 is a prefix and suffix of str2
    bool isPrefixAndSuffix(const std::string& str1, const std::string& str2) {
        int len1 = str1.length();
        int len2 = str2.length();

        // Check if str1 is longer than str2, if yes, it cannot be a prefix or suffix
        if (len1 > len2) {
            return false;
        }

        // Check if str1 is a prefix of str2
        bool isPrefix = (str2.substr(0, len1) == str1);

        // Check if str1 is a suffix of str2
        bool isSuffix = (str2.substr(len2 - len1, len1) == str1);

        // Return true if both conditions are met
        return isPrefix && isSuffix;
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;

        for(int i = 0; i < words.size(); i++) {
            for(int j = i + 1; j < words.size(); j++) {
                if(isPrefixAndSuffix(words[i], words[j])) {
                    count++;
                }
            }
        }

        return count;
    }
};