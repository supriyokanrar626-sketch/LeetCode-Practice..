class Solution {
public:
    int hammingDistance(int x, int y) {
        int xor_all = x ^ y ;
        int count = 0 ;
        while(xor_all > 0){
            xor_all = xor_all & (xor_all - 1) ;  // 1 ta 1 kete jabe..
            count++ ;
        }
        return count ;
    }
};