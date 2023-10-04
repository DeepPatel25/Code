class Solution {
public:
    int countPrimes(int n) {
        if(n==0 || n==1) return 0;
        int count = 0;
        vector<bool> prime(n, true);
        
        for(int i=2; i*i<n; i++){
            if(prime[i]==true){
                for(int j=i*i; j<n; j+=i){
                    prime[j] = false;
                }
            }
        }
        
        for(int i=2; i<n; i++){
            if(prime[i]) count++;
        }
        
        return count;
    }
};