class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        // digit 9 er besi hote parbe na..
        string s = "" ; 
        if(sum == 0 || sum>9*num) return s ;
        if(sum > 9 && num == 1) return s ;
        
        while(num-- > 0){
            int d = min(9, sum) ;
            s += char('0' + d) ;
            sum -= d ;
        }
        return sum == 0 ? s : "" ;
    }
};