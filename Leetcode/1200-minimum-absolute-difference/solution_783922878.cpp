class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        
        sort(arr.begin(), arr.end());
        int min = INT_MAX;
        
        for(int i=1; i<arr.size(); i++){
            if((arr[i]-arr[i-1])<min){
                min = arr[i]-arr[i-1];
            }
        }
        
        for(int i=1; i<arr.size(); i++){
            if(min==(arr[i]-arr[i-1])){
                ans.push_back({arr[i-1], arr[i]});
            }
        }
        
        return ans;
    }
};