class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        
        for(int i = left; i <= right; i++) {
            if(i % 10 == 0) continue;
            
            int temp = i;
            bool flag = true;

            while(temp != 0) {
                int digit = temp % 10;
                if(digit == 0 || i % digit != 0) {
                    flag = false;
                    break;
                }

                temp /= 10;
            }

            if(flag) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};