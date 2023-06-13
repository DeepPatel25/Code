class Solution {
public:
    int missingNumber(vector<int>& A) {
        int N = A.size();
        int sum = N * (N + 1) / 2;
        int arrSum = 0;
        for(int i = 0; i < N; i++) arrSum += A[i];
        
        return sum - arrSum;
    }
};