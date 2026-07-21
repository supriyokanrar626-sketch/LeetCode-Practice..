class Solution {
public:
    char kthCharacter(int k) {
        return 'a'+solve(k) ; // number to string character..
    }

private:
    int solve(int k){
        if(k == 1) return 0 ; // 1st char 'a' = 0

        int len = 1 ; // ata fix na.. len 1 dia start korchi..
        while(len *2 < k){
            len = len * 2 ;
        }
        int prev = solve(k - len) ; // solve(1) call hobe..
        return (prev + 1)%26 ; // right half a gele +1 hobe tai..
    }   
};