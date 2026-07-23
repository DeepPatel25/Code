class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int rightSum = 0, leftSum = 0, n = arr.size();

        for (int val: arr)
            rightSum += val;

        cout << "Right Sum :- " << rightSum << endl;

        for(int i = 0; i < n - 2; i++) {
            rightSum -= arr[i];
            leftSum += arr[i];

            cout << i << " " << leftSum << " " << rightSum << endl;

            if (2 * leftSum == rightSum) {
                int nextRightSum = rightSum, nextLeftSum = 0;

                cout << "\tInner Iteration Started :- " << nextRightSum << endl;

                for (int j = i + 1; j < n - 1; j++) {
                    nextRightSum -= arr[j];
                    nextLeftSum += arr[j];

                    cout << "\t" << leftSum << " " << nextLeftSum << " " << nextRightSum << endl;
                    if (leftSum == nextLeftSum && nextLeftSum == nextRightSum) return true;
                }
            }
        }

        return false;
    }
};