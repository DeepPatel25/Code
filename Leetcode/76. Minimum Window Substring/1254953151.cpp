class Solution {
public:
    string minWindow(string s, string t) {
        map<char, int> smp, tmp;

        for(int i = 0; i < t.size(); i++) tmp[t[i]]++;

        int i = 0, j = 0;
        int n = s.length();

        int start = -1, end = -1;

        while(i < n && j < n) {
            if(smp == tmp) {
                start = i, end = j;
                smp[s[i++]]--;
            } else {
                smp[s[j++]]++;
            }

            cout << i << ' ' << j << endl;
        }

        while(i < n) {
            if(smp == tmp) {
                start = i, end = j;
                smp[s[i++]]--;
                
            }
        }

        if(start == -1 && end == -1) return "";

        return s.substr(start, end);
    }
};