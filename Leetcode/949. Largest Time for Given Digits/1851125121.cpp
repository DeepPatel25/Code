class Solution {
public:
    string largestTimeFromDigits(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        string best = "";

        do {
            int h = arr[0] * 10 + arr[1];
            int m = arr[2] * 10 + arr[3];

            if (h < 24 && m < 60) {
                string HH = (h < 10 ? "0" : "") + to_string(h);
                string MM = (m < 10 ? "0" : "") + to_string(m);
                string t = HH + ":" + MM;

                if (t > best) best = t;
            }
        } while(next_permutation(arr.begin(), arr.end()));

        return best;
    }
};