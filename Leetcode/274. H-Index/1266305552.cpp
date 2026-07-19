class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int size = citations.size(), i;

        for(i = 1; i <= size; i++) {
            if(citations[size - i] < i) break;
        }

        return i - 1;
    }
};