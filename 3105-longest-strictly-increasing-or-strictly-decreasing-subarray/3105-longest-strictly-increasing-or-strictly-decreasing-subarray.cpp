class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inn = 1, dee=1; int i=1; int ans = 1 ;
        while(i<nums.size()){
            if(nums[i] > nums[i-1]){
                inn++;
                dee = 1;
            }else if(nums[i] < nums[i-1]){
                dee++;
                inn=1;
            }else {
                inn = 1; dee = 1;
            }
            ans = max(ans, max(inn,dee));
            i++;
        }
        return ans;
    }
};