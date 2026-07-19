class Solution {
private:
    bool isValid(int a, int b) {
        while(a) {
            if (a % 10 == 0)
                return false;
            a /= 10;
        }

        while(b) {
            if (b % 10 == 0)
                return false;
            b /= 10;
        }

        return true;
    }
    
public:
    vector<int> getNoZeroIntegers(int n) {
        int a = 1, b = n - a;

        while(!isValid(a, b)) {
            a++; b--;
        }

        return {a, b};
    }
};