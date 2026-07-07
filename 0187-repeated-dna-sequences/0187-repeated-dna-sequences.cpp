class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans ;
        unordered_map<string, int> kim ;
        int i=0 , j=0 ;
        int n = s.size() ;
        string window = "" ;
        if(n < 10) return ans ;
        while(j < n){
            window += s[j] ; // window to char add koro
            j++ ;

            if(j-i == 10){
                kim[window]++ ; // count barao ..
            
            if(kim[window] == 2){
                ans.push_back(window) ;
            }
            // abar window choto korte hobe...
            window.erase(window.begin()) ;
            i++;
          }
        }
        return ans ; // ans string return korbo..
    }
};