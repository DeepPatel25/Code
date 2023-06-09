class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int size = letters.size();

        if(letters[0] > target || target >= letters[size - 1]) return letters[0];

        char ans;
        int low = 0, high = size - 1;
        while(low <= high) {
            int mid = (low + high) / 2;

            if(letters[mid] > target) {
                ans = letters[mid];
                high = mid - 1;
            } 
            else low = mid + 1; 
        }

        return ans;
    }
};