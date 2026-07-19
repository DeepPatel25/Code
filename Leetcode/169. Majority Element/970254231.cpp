class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        int cnt = 0;
        int el;

        for(int i = 0; i < n; i++){
            if(cnt == 0) {
                cnt = 1;
                el = arr[i];
            } else if (arr[i] == el) cnt++;
            else cnt--;
        }

        cnt = 0;
        for(int i = 0; i < n; i++)
            if(arr[i] == el) cnt++;
        
        if(cnt > n / 2) return el;
        return -1;
    }
};