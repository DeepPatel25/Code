class Solution {
private:
    int revNumber(int n) {
        int rev = 0;

        while(n) {
            int d = n % 10;
            rev = rev * 10 + d;
            n /= 10;
        }

        return rev;
    }
    
public:
    int minMirrorPairDistance(vector<int>& nums) {
        int mini = INT_MAX;
        map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int rev = revNumber(nums[i]);

            if (mp.find(nums[i]) != mp.end()) {
                mini = min(mini, abs(mp[nums[i]] - i));
            }

            mp[rev] = i;
        }

        return mini != INT_MAX ? mini : -1;
    }
};