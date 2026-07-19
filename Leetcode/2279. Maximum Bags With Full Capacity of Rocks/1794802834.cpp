class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int ans = 0;
        vector<int> temp;

        for (int i = 0; i < capacity.size(); i++) {
            if (capacity[i] == rocks[i])
                ans++;
            else
                temp.push_back(capacity[i] - rocks[i]);
        }

        sort(temp.begin(), temp.end());
        
        int j = 0;
        while(j < temp.size() && temp[j] <= additionalRocks) {
            additionalRocks -= temp[j++];
            ans++;
        }

        return ans;
    }
};