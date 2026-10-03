class Solution {
public:
    int longestValidParentheses(string s) {
        vector<int> ans = {-1} ; int n = s.size() ; int mx = 0 ;
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                ans.push_back(i);
            }else {
                ans.pop_back() ;

                if(ans.empty()){
                    ans.push_back(i) ;
                }else{
                    mx = max(mx, i-ans.back()) ;
                }
            }
        }
        return mx ;
    }
};