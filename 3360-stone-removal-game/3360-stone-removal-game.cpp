class Solution {
public:
    bool canAliceWin(int n) { 
        int i=10 , win  = 1;
        while(n >= i){
            n = n-i ;
            i = i-1;
            win = win + 1;
        }
        return win%2 == 0 ;
    }
};