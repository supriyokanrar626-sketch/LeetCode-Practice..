class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char, int> M ;
        int i=0, j=0, len = 0 ;
        while(j < s.size()){
            M[s[j]]++;
            while(M[s[j]] > 2){
                M[s[i]]--;
                i++;
            }
            len = max(len, j-i+1);
            j++;
        }
        return len ;
    }
};