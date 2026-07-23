class Solution {
public:
    // Helper method to check if the substring s[i..j] is a palindrome
    bool isPalindrome(int i, int j, const string& s) {
        while (i < j) {  // Use i < j to avoid unnecessary comparison when i == j
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    // Main method to check if s can be a palindrome by removing at most one character
    bool validPalindrome(string s) {
        int i = 0, j = s.length() - 1;

        while (i < j) {  // Use i < j to avoid unnecessary comparison when i == j
            if (s[i] != s[j]) {
                // Check if either skipping the left character or the right character forms a palindrome
                return isPalindrome(i + 1, j, s) || isPalindrome(i, j - 1, s);
            }
            i++;
            j--;
        }

        return true;  // The entire string is a palindrome
    }
};
