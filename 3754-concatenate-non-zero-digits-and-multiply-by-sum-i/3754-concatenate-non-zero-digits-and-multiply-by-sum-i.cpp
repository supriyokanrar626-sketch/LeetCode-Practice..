class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0 , x = 0;
        string s = to_string(n) ; // n ke string te convert koro..
        for(int i=0;i<s.size();i++){
            if(s[i] != '0'){
                int digit = s[i] - '0' ; // s[i] ke int te convert kore
                sum += digit ;
                x = x*10 + digit ;
            }
        }
        return x*sum ;
    }
};