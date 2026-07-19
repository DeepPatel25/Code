class Solution {
private:
    int twos_complement(int n) {
        if (n < 0) {
            n = ~n;
            n++;
        }
        
        return n;
    }

public:
    string toHex(int num) {
        if(num < 0) {
            num = twos_complement(num);
        }

        string ans = "";

        while(num != 0) {
            int rem = num % 16;

            if(rem >= 0 && rem <= 9) {
                ans += to_string(rem);
            } else {
                switch(rem) {
                    case 10:
                        ans += "a";
                        break;
                                        case 10:
                        ans += "a";
                        break;
                                            case 10:
                        ans += "a";
                        break;
                        
                }
            }
        }
    }
};