#include <string>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> charCount(128, 0); // Array to store character counts
        
        // Count occurrences of characters in t
        for (char c : t)
            charCount[c]++;
        
        int minLength = INT_MAX;
        int minStart = 0;
        int remaining = t.size(); // To track remaining characters to be found
        
        int start = 0, end = 0; // Pointers for the sliding window
        
        // Move end pointer until all characters are found
        while (end < s.size()) {
            if (charCount[s[end++]]-- > 0)
                remaining--;
            
            // If all characters are found, move start pointer to minimize window size
            while (remaining == 0) {
                if (end - start < minLength) {
                    minLength = end - (minStart = start);
                }
                if (charCount[s[start++]]++ == 0)
                    remaining++;
            }
        }
        
        // Return the smallest window or empty string if no window found
        return minLength == INT_MAX ? "" : s.substr(minStart, minLength);
    }
};
