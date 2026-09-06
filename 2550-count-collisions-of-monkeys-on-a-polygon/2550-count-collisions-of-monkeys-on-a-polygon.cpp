class Solution {
public:
    long long  mod = 1e9 + 7 ;
    
    int solve (int n){
        if(n == 0) return 1 ; // 2^0 = 1 , base case
        long long way = solve(n/2) ; // n ke half kore recursion
        if(n%2 == 1) return (way*way*2)%mod ; // n odd hole
        else return (way*way)%mod ; // n even hole
    }
    int monkeyMove(int n) {
        return (solve(n)-2+mod)%mod ; // 2^n - 2 
    }
};