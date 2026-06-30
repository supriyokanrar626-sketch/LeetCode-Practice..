class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.length() ;
        int i=0 , j=0 ;
        
        int count = 0;

        while(j < n){

            if(j-i+1 < 3){
                j++; // window size 3 ar kom hole only j brbe
            } else if(j-i+1 == 3){
                if(s[i] != s[i+1] && s[i+1] != s[j] && s[i] != s[j]){
                    count++; // condition right hole count barbe..
                }
                i++ ; j++ ; // window slide koro..
            }
        }
        return count ;
    }
};