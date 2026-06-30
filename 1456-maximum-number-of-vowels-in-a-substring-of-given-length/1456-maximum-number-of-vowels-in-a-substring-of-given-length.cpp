class Solution {
public:
    bool isVowel(char c){
        return c =='a' || c =='e'|| c =='i' || c =='o' ||c =='u' ;
    }
    int maxVowels(string s, int k) {
        int n = s.length() ;
        int i=0 , j=0 ;
        int count = 0 , maxi = 0;
        while(j < n){
            if(isVowel(s[j])){ // jodi vowel thake .. count barbe..
                count++ ; 
            }

            if(j-i+1 < k){
                j++ ; // size k ar theke choto tai sudhu expand koro..
            }
            else if(j-i+1 == k){ // size k hoi gache..
                maxi = max(maxi, count) ; // koto gulo vowel ache deko

              if(isVowel(s[i])){
                count-- ; // window choto koro..
              }
              i++; j++ ; // window new character jonno egobe..
            }
        }
        return maxi ;
    }
};