class Solution {  // maximum k character change kore sobche boro same character ar window koto boro hobe ? 
public:
    int characterReplacement(string s, int k) {
        int n = s.length() ;
        int i=0 , j=0 ;
        int ans = 0 ;
        int max_freq = 0 ; // window ar moddhe sobcheye besi kono 1 ta char koto bar

        vector<int> freq(26, 0) ;  // A-Z ar count 
        while(j < n){
            freq[s[j] - 'A']++ ; // window ar moddhe value put 
            max_freq = max(max_freq, freq[s[j] - 'A']) ;  // max update

            while((j-i+1) - max_freq > k){  // total - sobcheye besi  > k
                 freq[s[i] - 'A']-- ; // window choto koro
                 i++ ;  // max_freq komabo na karon ans kombe na..
            }
            ans = max(ans, j-i+1) ;  // valid window size nao
            j++ ;
        }
        return ans ;
    }
};