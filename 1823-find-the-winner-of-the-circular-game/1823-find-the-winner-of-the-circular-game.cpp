class Solution {
public: // proti bar ekjon beria gele circle ta chotto hoi jabe.. etar formula che... win(0) = 1 , win(n) = (win(n-1)+k)%n 
    int f(int n, int k){
        if(n == 1) return 0 ;

        return (f(n-1,k)+k)%n ;
    }
    int findTheWinner(int n, int k) {
        return f(n,k)+1 ;
    }
};