class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> answer(n);

        for(int i = 0; i < n; i++) {
            int j = i + 1;
            
            while(j < n) {
                if(temperatures[i] < temperatures[j]) {
                    answer[i] = j - i;
                    break;
                }
                j++;
            }

            if(j == n) {
                answer[i] = 0;
            }
        }

        return answer;
    }
};