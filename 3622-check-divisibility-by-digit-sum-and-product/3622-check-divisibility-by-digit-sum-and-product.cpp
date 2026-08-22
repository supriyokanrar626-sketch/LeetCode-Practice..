class Solution {
public:
    bool checkDivisibility(int n) {
        int x = n ;
        int sum = 0 , pro =  1 ;
        while(n > 0){
            int rem = n%10 ;
            sum += rem ;
            pro *= rem ;
            n = n/10 ;
        }
         return x%(sum+pro) == 0 ; // x nicchi karon amake original je n ta chilo ota use korte hobe..
    }
};