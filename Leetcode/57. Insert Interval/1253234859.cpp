class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        if(intervals.size() == 0){
            intervals.push_back(newInterval);
            return intervals;
        }
        
        int index = -1;
        for(int i = 0; i < intervals.size(); i++) {
            if(intervals[i][0] <= newInterval[0] && newInterval[0] <= intervals[i][1]) {
                intervals[i][1] = newInterval[1];
                index = i;
                break;
            }
        }

        while(index < intervals.size() - 1) {
            if(intervals[index][1] >= intervals[index + 1][0]) {
                intervals[index][1] = max(intervals[index][1], intervals[index + 1][1]);
                intervals.erase(intervals.begin() + index + 1);
            } else {
                break;
            }
        }
        return intervals;
    }
};