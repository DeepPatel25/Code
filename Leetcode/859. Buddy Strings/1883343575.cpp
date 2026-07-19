class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int n = s.length();

        if (goal.length() != n) {
            return false;
        }

        if (s == goal) {
            set<char> temp(s.begin(), s.end());
            return temp.size() < goal.size();
        }

        int i = 0, j = n - 1;
        while (i < j and s[i] == goal[i]) {
            i++;
        }

        while (j >= 0 and s[j] == goal[j]) {
            j--;
        }

        if (i < j) {
            swap(s[i], s[j]);
        }

        return s == goal;
    }
};