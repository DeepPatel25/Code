class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int lastMoment = 0;

        for (int l: left)
            lastMoment = max(lastMoment, l);
        
        for (int r: right)
            lastMoment = max(lastMoment, n - r);
        
        return lastMoment;
    }
};