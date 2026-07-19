class Solution {
public:
    map<pair<int, int>, int> mp;

    int gcd(int a, int b) { 
        if(mp.find({a, b}) != mp.end()) return mp[{a, b}];

        int result = min(a, b); 
        while (result > 0) { 
            if (a % result == 0 && b % result == 0) { 
                break; 
            } 
            result--; 
        } 
    
        return mp[{a, b}] = result; 
    } 

    bool isBeautiful(int num1, int num2) {
        string str1 = to_string(num1);
        int firstDig = str1[0] - '0';
        int lastDig = num2 % 10;

        return gcd(firstDig, lastDig) == 1;
    }

    int countBeautifulPairs(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if(isBeautiful(nums[i], nums[j])) {
                    count++;
                }
            }
        }
        return count;
    }
};