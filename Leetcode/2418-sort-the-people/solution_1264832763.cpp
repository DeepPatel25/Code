class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for(int i = 0; i < names.size() - 1; i++) {
            int idx = i;
            int maxi = heights[i];
            for(int j = i + 1; j < names.size(); j++) {
                if(maxi < heights[j]) {
                    maxi = heights[j];
                    idx = j;
                }
            }

            if(idx != i) {
                swap(names[i], names[idx]);
                swap(heights[i], heights[idx]);
            }
        }

        return names;
    }
};