class Solution {
public:
    void wiggleSort(vector<int>& arr) {
        vector<int> temp;
        for(int val: arr) {
            temp.push_back(val);
        }

        sort(temp.begin(), temp.end());
        int first = 0, last = arr.size() - 1;

        for(int i = 1; i < arr.size(); i += 2) {
            arr[i] = temp[last--];
        }

        for(int i = 0; i < arr.size(); i += 2) {
            arr[i] = temp[last--];
        }
    }
};