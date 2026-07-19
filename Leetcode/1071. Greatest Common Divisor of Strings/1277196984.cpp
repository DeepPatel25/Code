class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int a = str1.size(), b = str2.size();
        if(str1 + str2 != str2 + str1) return "";
        return str1.substr(0, gcd(a, b));
    }
};