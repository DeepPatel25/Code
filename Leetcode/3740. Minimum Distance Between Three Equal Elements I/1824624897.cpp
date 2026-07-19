class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        
        if (n <= 2) return -1;
        map<int, vector<int>> mp;

        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }

        int mini = INT_MAX;
        
        for (auto it: mp) {
            if (it.second.size() >= 3) {
                int a = it.second.size();

                for (int i = 0; i < a; i++) {
                    for (int j = i + 1; j < a; j++) {
                        for (int k = j + 1; k < a; k++) {
                            mini = min(mini, abs(it.second[i] - it.second[j])
                                    + abs(it.second[j] - it.second[k]) +
                                      abs(it.second[k] - it.second[i]));                   
                        }
                    }
                }
            } 
        }

        return mini == INT_MAX ? -1 : mini;
    }
};