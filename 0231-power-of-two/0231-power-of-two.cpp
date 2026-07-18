class Solution {
public:
    bool isPowerOfTwo(int n) {

        // using bit manipulation...Below ..
        // if(n > 0 && (n & (n-1)) == 0) {
        //     return true ;
        // } else {
        //     return false ;
        // }
        
         // if(n <= 0)
        // {
        //     return false;
        // } else{
        //     return log2(n) == floor(log2(n)) ;
        // }
        
        // using recursion..

        if(n <= 0) return false ;  // -ve ar jonno 
        if(n == 1) return true ;
        if(n % 2 != 0) return false ; // n odd hole

        return isPowerOfTwo(n/2) ; // n ke 2 dia vag kore abar check..
    }
};