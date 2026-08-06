class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
          int pro = 1 ;
          int temp = n ;
          while(temp > 0){
            int rem = temp % 10 ;
            if(rem == 0){
                pro = 0 ; break ;
            }
              pro *= rem ;
              temp /= 10 ;
          }
          if(pro%t == 0){
             return n ;
            }
            n++;
        }
        return n;
    }
};