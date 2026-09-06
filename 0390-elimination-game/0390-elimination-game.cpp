class Solution {
public:
    int left(int n){
        if(n == 1) return 1 ;
        return 2*right(n/2) ;
    }
//  odd hole 2k - 1 //  even hole 2k
    int right(int n){
        if(n == 1) return 1 ;
        if(n%2 == 1) return 2*left(n/2) ;  // n = 5 (odd) [2,4] tai 2*k
        else return 2*left(n/2) - 1 ; // n = 4 (even) [1,3] tai 2k-1
    }
   
    int lastRemaining(int n) {
        return left(n) ;
    }
};