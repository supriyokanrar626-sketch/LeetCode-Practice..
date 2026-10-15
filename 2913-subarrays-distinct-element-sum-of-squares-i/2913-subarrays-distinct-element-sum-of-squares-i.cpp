class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size() ; long long ans = 0 ;
        for(int i=0;i<n;i++){
            set<int> set ;
            for(int j=i;j<n;j++){
                set.insert(nums[j]);
                int k = set.size() ;
                ans += k*k ;
            }
        }
        return ans ;
    }
};