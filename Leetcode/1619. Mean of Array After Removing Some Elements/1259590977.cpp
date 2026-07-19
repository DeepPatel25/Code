class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int dlt = arr.size() * 0.05;

        for(int i = 0; i < dlt; i++) {
            auto it = arr.begin();
            arr.erase(it);


        }
    }
};