class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int i=0 , j=0 , ans = 0 ;

        unordered_set<char> str ;
        while(j < n){
            while(str.count(s[j])){  // duplicate thakle
                str.erase(s[i]); // left char remove koro
                i++ ;   // window agao
            }
            str.insert(s[j]); // new element add koro
            ans = max(ans, j-i+1) ;
            j++ ; 
        }
        return ans ;
    }
};