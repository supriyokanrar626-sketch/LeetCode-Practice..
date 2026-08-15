class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int total_xor = 0 ;
        for(int x : nums){
            total_xor = total_xor ^ x ;
        }
        if(total_xor != 0){
            return nums.size();
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0){
                return nums.size()-1 ;
            }
        }
        return 0 ;
    }
};