class Solution {
public:
    int compress(vector<char>& chars) {
        int arrIndex = 0;

        int i = 0, n = chars.size();
        while(i < n) {
            int j = i + 1;
            int count = 1;

            while(j < n && chars[i] == chars[j]) {
                j++; count++;
            }

            chars[arrIndex++] = chars[i];

            if(count == 1) {
                i++;
            } else {
                string temp = to_string(count);
                for(char ch: temp) {
                    chars[arrIndex++] = ch;
                }
                i = j;
            }
        }

        return arrIndex;
    }
};