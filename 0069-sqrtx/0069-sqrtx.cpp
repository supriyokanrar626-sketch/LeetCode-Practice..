using ll = long long ;  // overflow atkate
class Solution {
public:
    int mySqrt(int x) {
        // return sqrt(x);  // ata nulla approach..

        if(x < 2) return x ; // x = 1 or 0  hole.. 1/0 return korbe..

        int left = 1 , right = x ; // BS ar rule
        int ans = 0 ;
        while(left <= right){
            ll mid = left + (right-left)/2 ; // mid calculate korlam
            ll sqr = mid*mid ;

            if(sqr == x) return mid ; // akdom tik square peye gele
            else if(sqr < x){
                ans = mid ; // mid possible ans hobe.. when 1<5 ba onno kichu jokhon hobe..
                left = mid + 1 ; //left position update 
            } else {
                right = mid - 1 ; //  right pos update
            }
        }  
        return ans ;      // left > right holr loop ses and mid answer ta return korbe.. 
    }
};