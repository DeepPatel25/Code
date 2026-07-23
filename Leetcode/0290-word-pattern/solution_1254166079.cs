public class Solution {
    public bool WordPattern(string pattern, string s) {
        string[] splitString = s.Split(' ');
        Dictionary<char, string> dt = new();

        for(int i = 0; i < pattern.Length; i++) {
            if(dt.ContainsKey(pattern[i])) {
                if(dt[pattern[i]] != splitString[i]) {
                    return false;
                }
            }
            else {
                dt.Add(pattern[i], splitString[i]);
            }
        }

        return true;
    }
}