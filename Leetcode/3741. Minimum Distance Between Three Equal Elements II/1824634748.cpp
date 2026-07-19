class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return -1;

        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
            mp[nums[i]].push_back(i);

        int mini = INT_MAX;
        for (auto it: mp) {
            int size = it.second.size();

            if (size <= 2)
                continue;
            else if (size == 3)
                mini = min(mini, abs(it.second[0] - it.second[1]) + abs(it.second[1] - it.second[2]) + abs(it.second[2] - it.second[0]));
            else {
                for (int i = 0; i < size; i++) {
                    for (int j = i + 1; j < size; j++) {
                        for (int k = j + 1; k < size; k++) {
                            mini = min(mini, abs(it.second[i] - it.second[j])
                                      + abs(it.second[j] - it.second[k])
                                      + abs(it.second[k] - it.second[i]));
                        }
                    }
                }
            }
        }

        return mini != INT_MAX ? mini : -1;
    }
};