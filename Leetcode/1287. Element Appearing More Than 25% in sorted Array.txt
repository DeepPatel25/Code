class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int size = arr.size();
        int qt = size / 4;
        int cnt = 1;
        int p = arr[0];

        for(int i = 1; i < size; i++) {
            if(p == arr[i]) cnt++;
            else cnt = 1;

            if(cnt > qt) return arr[i];

            p = arr[i];
        }

        return p;
    }
};