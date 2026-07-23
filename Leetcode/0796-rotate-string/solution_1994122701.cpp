class Solution {
public:
    bool rotateString(string s, string goal) {
        string tmp = s + s;
        return tmp.find(goal) != tmp.npos;
    }
};