class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;

        while (low <= high) {
            string s = to_string(low);

            if (s.size() > 1) {
                int start = 0, end = s.size() - 1;
                int startSum = 0, endSum = 0;

                while (start < end) {
                    startSum += s[start++] - '0';
                    endSum += s[end--] - '0';
                }

                if (startSum == endSum)
                    count++;
            }

            low++;
        }

        return count;
    }
};