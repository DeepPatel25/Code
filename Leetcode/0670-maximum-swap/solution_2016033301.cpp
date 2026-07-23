class Solution {
public:
    int maximumSwap(int num) {
        string n = to_string(num);

        for (int i = 0; i < n.size(); i++) {
            if (n[i] != '9') {
                // Find Highest number
                char c = n[i];
                int idx = -1;

                for (int j = i + 1; j < n.size(); j++) {
                    if (n[j] >= c) {
                        idx = j;
                        c = n[j];
                    }
                }

                if (idx != -1 && n[i] != n[idx]) {
                    swap(n[i], n[idx]);
                    return stoi(n);
                }
            }
        }

        return num;
    }
};