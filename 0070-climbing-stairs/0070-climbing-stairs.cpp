class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2) return n;
        

        // return climbStairs(n-1) + climbStairs(n-2) ; // ata korle timelimit exceed hoi jabe..

        int f1 = 2 ;
        int f2 = 1 ;
        int curr = 0 ;
        for(int i=2; i<n; i++){
            curr = f1 + f2 ;
            f2 = f1 ;
            f1 = curr ;
        }
        return curr ;
    }
};