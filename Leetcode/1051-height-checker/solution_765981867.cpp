class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> difference;
        
        difference = heights;
        sort(heights.begin(), heights.end());
        
        int i = 0;
        int count = 0;
        while(i<heights.size()){
            if(heights[i]!=difference[i]) count++;
            i++;
        }
        
        return count;
    }
};