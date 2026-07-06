class Solution {
  public:
    bool isBuzz(int n) {
        int rem = n % 10;
        return rem == 7 or n % 7 == 0;
    }
};
