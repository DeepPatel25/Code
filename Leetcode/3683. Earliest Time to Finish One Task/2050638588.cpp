class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int mini = INT_MAX;

        for (auto task: tasks)
            mini = min(mini, task[0] + task[1]);
        
        return mini;
    }
};