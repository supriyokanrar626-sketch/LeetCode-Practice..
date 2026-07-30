class Solution {
public:
    int minimumPushes(string word) {
        int sum = 0 ;
        vector<int> freq(26, 0);

        for(char c : word){
            freq[c - 'a']++ ;
        }
        sort(freq.begin(),freq.end(),greater<int>()) ; // boro theke choto..

        for(int i=0;i<26;i++){
            if(freq[i] == 0) break; 
            sum += freq[i] * (i/ 8+1) ;
        }
        return sum ;
    }
};