class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        // if(n <= 0)
        // {
        //     return false;
        // } else{
        //     return log2(n) == floor(log2(n)) ;
        // }

        // using bit manipulation...Below ..
        if(n > 0 && (n & (n-1)) == 0) {
            return true ;
        } else {
            return false ;
        }
        
    }
};