class Solution {
public:
    bool isPowerOfThree(int n) {
        // if(n <= 0)
        // {
        //     return false;
        // }
        // else {
        //     while(n%3 == 0)
        //     {
        //         n = n/3;
                
        //     }
        //     return n == 1;
        // }

        if(n <= 0) return false ;
        if(n == 1) return true ;
        if(n%3 != 0) return false ;

        return isPowerOfThree(n/3) ;
    }
};