class Solution {
public:
    double solve(double x, long long n) {
        if(n == 0) return 1.0 ;

        double half = solve(x, n/2) ; // age half ber koro
        if(n%2 == 0){
            // x = (x^(n/2))^2 ; // C++ te ata xor kore power na..
            return half * half ; // even ar jonno
        } else {
            // x = x * (x^(n/2))^2 ;
            return x * half * half ; // odd ar jonno
        }
        
    }
    double myPow(double x, int n) {
        if(n == 0) return 1.0 ;

        long long N = n ;
        if(N < 0){ // n jokhon -ve hoi
            x = 1/x ;
            N = -N ; // n = -2 hole..ota ke n = 2 te kora..
        }
        return solve(x, N) ;
    }
};