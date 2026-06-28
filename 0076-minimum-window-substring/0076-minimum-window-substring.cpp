class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.length() ;
        int n = t.length();
        int count = 0 ;
        if(s.empty() || t.empty()|| m < n) return "";

        unordered_map<char, int> need, have ;
        for(char c : t) need[c]++ ; // t array ar frequency

        int ans_len = INT_MAX , ans_i = 0 ;

        int i=0 , j=0 ;
        while(j < m){
            char c = s[j] ;
            have[c]++; // window e add koro

            if(need.count(c) && have[c] == need[c]){  // jodi ei char count need ar sathe match kore jay ...
                count++ ;  // count barao..
            }

            while(i <= j && count == need.size()){  // jokhon valid window pabo.. choto korbo..
                c = s[i] ;

                if(j-i+1 < ans_len){  // min window update
                    ans_len = j-i+1 ;
                    ans_i = i ;
                }

                have[c]-- ;  // left sorabo
                if(need.count(c) && have[c] < need[c]){
                    count-- ; // sore gele window invalid hoi jabe
                }
                i++ ;
            }
            j++ ;
        }
        return ans_len == INT_MAX ? "" : s.substr(ans_i, ans_len) ;
    }
};