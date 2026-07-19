class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int, int> freq;

        for(int val: basket1) freq[val]++;
        for(int val: basket2) freq[val]--;

        vector<int> toSwap;
        for(auto p: freq) {
            int key = p.first;
            int val = p.second;

            if(val % 2 != 0)
                return -1;

            for(int i = 0; i < abs(val) / 2; i++)
                toSwap.push_back(key);
        }

        sort(toSwap.begin(), toSwap.end());

        int minEle = INT_MAX;
        for(int i = 0; i < basket1.size(); i++)
            if(basket1[i] < minEle) 
                minEle = basket1[i];

        for(int i = 0; i < basket2.size(); i++)
            if(basket2[i] < minEle)
                minEle = basket2[i];

        long long ans = 0;
        for(int i = 0; i < toSwap.size() / 2; i++)
            ans += min(toSwap[i], 2 * minEle);

        return ans;
    }
};