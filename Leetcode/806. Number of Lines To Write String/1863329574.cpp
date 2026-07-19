class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int pixel = 0, lineCount = 1;

        for (int i = 0; i < s.size(); i++) {
            if (pixel + widths[s[i] - 'a'] > 100) {
                lineCount++;
                pixel = widths[s[i] - 'a'];
            } else {
                pixel += widths[s[i] - 'a'];
            }
        }

        return {lineCount, pixel};
    }
};