class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx = INT_MIN ; int ans = 0 ;
        for(auto x : nums){
            mx = max(mx, x);
        }
        for(auto x : nums){
            ans += (mx-x) ;
        }
        return ans ;
    }
};