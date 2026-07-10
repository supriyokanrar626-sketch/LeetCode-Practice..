class Solution {
public:
    int hammingWeight(int n) {
        int cnt = 0 ;
        while(n > 0){
            n = n & (n-1) ; // ses ar 1 take 0 kore dicceh..
            cnt++ ; /// ex : 11 = 1011 , 10 = 1010 .. 1011 & 1010 = 1110 ..
        }
        return cnt ;  // 3 ta 1 ache.. 
    }
};