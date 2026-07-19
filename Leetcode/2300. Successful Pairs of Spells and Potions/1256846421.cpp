class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = potions.size();
        
        sort(potions.begin(), potions.end());

        for(int i = 0; i < spells.size(); i++) {
            int start = 0, end = n - 1;
            int index = n;

            while(start <= end) {
                int mid = start + (end - start) / 2;
                long long temp = spells[i] * potions[mid];

                if(temp >= success) {
                    end = mid - 1;
                    index = mid;
                } else {
                    start = mid + 1;
                }
            }

            spells[i] = n - index;
        }

        return spells;
    }
};