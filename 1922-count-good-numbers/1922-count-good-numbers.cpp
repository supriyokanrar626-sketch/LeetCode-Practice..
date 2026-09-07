class Solution {
public:
    long long mod = 1e9 + 7 ;
    long long f(long long p, long long q){
        if(q == 0) return 1 ;
        long long half = f(p, q/2);
        half = (half*half) % mod ;

        if(q%2 == 1) {
            half = (half*p)%mod ;
        }
        return half ;
    }
    int countGoodNumbers(long long n) {
        long long eve = (n+1)/2 ; 
        long long odd = n/2 ;
         return (f(5, eve) * f(4, odd))%mod ;
    }
};