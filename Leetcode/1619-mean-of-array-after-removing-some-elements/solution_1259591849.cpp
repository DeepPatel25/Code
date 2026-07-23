class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int dlt = arr.size() * 0.05;

        for(int i = 0; i < dlt; i++) {
            auto it = arr.begin();
            arr.erase(it);
        }

        for(int i = 0; i < dlt; i++) {
            auto it = arr.end() - 1;
            arr.erase(it);
        }

        double sum = 0;
        for(auto it = arr.begin(); it != arr.end(); it++) {
            sum += *it;
        }

        return sum / arr.size();
    }
};