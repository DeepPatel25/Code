class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        long leftSide = index;
        long rightSide = n - index - 1;

        long start = 1;
        long end = maxSum;
        long ans = 0;

        while(start <= end) {
            long mid = start + (end - start) / 2;
            long leftSum = 0, rightSum = 0;
            long middleEle = mid - 1;

            if(leftSide <= middleEle)
                leftSum = middleEle * (middleEle + 1) / 2 - 
                            (middleEle - leftSide) * (middleEle - leftSide + 1) / 2; 
            else
                leftSum = middleEle * (middleEle + 1) / 2 + 1 * (leftSide - middleEle);

            if(rightSide <= middleEle)
                rightSum = middleEle * (middleEle + 1) / 2 - 
                            (middleEle - rightSide) * (middleEle - rightSide + 1) / 2; 
            else
                rightSum = middleEle * (middleEle + 1) / 2 + 1 * (rightSide - middleEle);

            long sum = mid + leftSum + rightSum;

            if(sum <= maxSum) {
                ans = mid;
                start = mid + 1;
            }
            else
                end = mid - 1; 
        }

        return ans;
    }
};