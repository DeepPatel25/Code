class Solution {
public:
    bool rotateString(string s, string goal) {
        string tmp = s + s;
        return s.size() == goal.size() and tmp.find(goal) != tmp.npos;
    }
};