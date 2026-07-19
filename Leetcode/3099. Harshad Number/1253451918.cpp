class Solution {
private:
    int getSum(int x) {
        int sum = 0;
        while(x != 0) {
            sum += (x % 10);
            x /= 10;
        }

        return sum;
    }
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = getSum(x);
        return x % sum == 0 ? sum : -1;
    }
};