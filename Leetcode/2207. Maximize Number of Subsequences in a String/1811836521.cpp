/**
 * @class Solution
 * @brief Finds the maximum number of subsequences equal to a given pattern 
 *        that can be formed by inserting one character (either pattern[0] or pattern[1]) 
 *        anywhere in the given text.
 *
 * Problem Context:
 * ----------------
 * Given a string `text` and a `pattern` of length 2, we can insert one occurrence
 * of either pattern[0] or pattern[1] anywhere in `text`. 
 * We need to return the maximum possible number of subsequences equal to `pattern` 
 * that can be formed after this insertion.
 *
 * Example:
 * --------
 * text = "abdcdbc", pattern = "ac"
 * -> If we insert 'a' at the beginning: "aabdcdbc", subsequences "ac" = 4
 * -> If we insert 'c' at the end: "abdcdbcc", subsequences "ac" = 4
 * So, the answer is 4.
 */

class Solution {
public:
    long long maximumSubsequenceCount(string text, string pattern) {
        long long ans = 0, ans1 = 0; // To store two possible results
        // Option 1: Insert pattern[0] at the beginning
        string f = pattern[0] + text;
        // Option 2: Insert pattern[1] at the end
        string s = text + pattern[1];

        long long cnt1 = 0; // Counter for number of pattern[0] characters seen so far

        // ---- Option 1: Compute subsequences for f ----
        for (int i = 0; i < f.size(); i++) {
            if (f[i] == pattern[0]) 
                cnt1++; // Count how many times pattern[0] appears
            else if (f[i] == pattern[1]) 
                ans += cnt1; // Every pattern[1] forms subsequences with all prior pattern[0]'s
        }

        // If both characters in pattern are the same (like "aa")
        // Then, total subsequences = nC2 = (cnt1 * (cnt1 + 1)) / 2
        if (pattern[0] == pattern[1])
            ans = (cnt1 * (cnt1 + 1)) / 2;
        
        // ---- Option 2: Compute subsequences for s ----
        cnt1 = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == pattern[1]) 
                cnt1++; // Count occurrences of pattern[1] from the end
            else if (s[i] == pattern[0]) 
                ans1 += cnt1; // Each pattern[0] can pair with all pattern[1]'s after it
        }

        // Again, handle case when pattern[0] == pattern[1]
        if (pattern[0] == pattern[1])
            ans1 = (cnt1 * (cnt1 + 1)) / 2;
        
        // Return the maximum of the two options
        return max(ans, ans1);
    }
};
