class Solution {
public:
    vector<int> constructRectangle(int area) {
        int p = sqrt(area);

        while(area % p != 0) {
            p--;
        }

        return {area / p, p};
    }
};