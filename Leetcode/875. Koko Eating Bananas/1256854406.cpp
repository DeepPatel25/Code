class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());

        int start = 1;
        int end = piles.back();

        int ans = INT_MAX;

        while(start <= end) {
            int mid = start + (end - start) / 2;

            int count = 0;
            for(int i = 0; i < piles.size(); i++) {
                if(piles[i] <= mid) {
                    count++;
                } else {
                    count += (piles[i] / mid);
                    if(piles[i] % mid != 0) count++;
                }
            }

            if(count <= h) {
                end = mid - 1;
                ans = min(ans, mid);
            } else {
                start = mid + 1;
            }
        }

        return ans;
    }
};