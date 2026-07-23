class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {        
        int a = points[0][0], a1 = points[0][1];
        int b = points[1][0], b1 = points[1][1];
        int c = points[2][0], c1 = points[2][1];
        
        if((c-b)*(b1-a1)==(b-a)*(c1-b1))
            return false;
        return true;
    }
};