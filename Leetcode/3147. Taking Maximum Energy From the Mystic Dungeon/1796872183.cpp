class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int n = energy.size(), maxi = INT_MIN;
        
        for (int i = n - 1; i >= 0; i--) {
            if (i + k < n)
                energy[i] += energy[i + k];
            
            maxi = max(energy[i], maxi);
        }

        return maxi;
    }
};