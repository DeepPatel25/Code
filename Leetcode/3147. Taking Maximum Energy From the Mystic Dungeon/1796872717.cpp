class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int n = energy.size();
        
        for (int i = n - k - 1; i >= 0; i--) {
            energy[i] += energy[i + k];
        }

        return *max_element(energy.begin(), energy.end());
    }
};