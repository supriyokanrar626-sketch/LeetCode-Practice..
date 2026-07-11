class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end()) ;
        int n = nums.size() ;
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i] != i)
        //     {
        //         return i ;
        //     } 
        // }
        // return n ;

        // Using bit Manipulation...
        int xor_all = n ;
        for(int i=0;i<n;i++){
            xor_all = xor_all ^ i ^ nums[i] ;
        }
        return xor_all ;
    }
};