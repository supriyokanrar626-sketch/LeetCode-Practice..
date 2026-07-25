class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n) ; // 2772 -> "2772"

        sort(s.begin(),s.end()) ; // "2772" -> "2277"

        int len = s.size();
        int fst = s[len-1] - '0' ;
        int snd = s[len-2] - '0' ;

        return fst * snd ;
    }
};