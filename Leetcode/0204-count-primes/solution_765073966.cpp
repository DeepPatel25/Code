class Solution {
public:
    int countPrimes(int n) {
        if(n==0 || n==1) return 0;
        int count = 0;
        
        int a = 2;
        while(a<n){
            bool flag = false;
            int i = 2;
            while(i<a){
                if(a%i==0){
                    flag = true;
                    break;
                }
                i++;
            }
            if(!flag){
                count++;
            }
            a++;
        }
        
        return count;
    }
};