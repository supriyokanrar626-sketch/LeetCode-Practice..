class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size() , m = p.size() ;
        vector<int> ans ;
        if(n < m) return ans ;
        
        vector<int> need(26, 0), have(26, 0) ;
        for(char c : p) need[c - 'a']++ ; // p ar char gulo need te add koro

        int req = 0 ; // koita unique char lagbe..
        for(int x : need) if(x>0) req++ ;

        int i=0 , j=0 ;
        int formed = 0 ; // koita match korlo..

        while(j < n){
            have[s[j] - 'a']++ ; // have ar moddhe n ar element put kro
            if(have[s[j] - 'a'] == need[s[j] - 'a']){
                formed++ ;
            }

            if(j-i+1 == m){
                if(req == formed){
                    ans.push_back(i) ; // empty ans vector te starting idx i put korlam..
                }

                if(have[s[i] - 'a'] == need[s[i] - 'a']){ // jodi smae ase
                    formed-- ; // i ke agia nia jao
                }
                have[s[i] - 'a']-- ;
                i++ ; // left barao..
            }
            j++ ; // window right ar dike jabe.. 
        }
        return ans ; // ans ar moddhe index gulo thakbe..
    }
};