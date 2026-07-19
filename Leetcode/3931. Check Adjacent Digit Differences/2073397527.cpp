class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        for (int i = 0; i < s.size(); i++)
            for (int j = i + 1; j < s.size(); j++) {
                int diff = abs(s[i] - s[j]);
                
                if (diff > 2)
                    return false;
            }

        return true;
    }
};