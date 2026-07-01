class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0 ;
        for(int i=0; i<word.size();i++){
            if(isupper(word[i])){ // java hole Character.isUpperCase(word.charAt(i))  kortam..
                count++ ;
            }
        }
        return count == word.size() || count == 0 || (count == 1 && isupper(word[0])) ;
    }
};