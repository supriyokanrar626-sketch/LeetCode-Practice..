class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.length() ;
        int i=0 , j=0 ;
        int white = 0 ;
        int ans = INT_MAX ;
        while(j < n){
            if(blocks[j] == 'W'){
                white++ ;
            }
            if(j-i+1 == k){   // window size k ar equal hole
               ans = min(ans , white) ;  // ans update 

               if(blocks[i] == 'W') white-- ;  // window slide kro.
               i++ ;  // left ke agia dao
            }
            j++ ; // right ke agia dao ..

        }
        return ans ;
    }
};