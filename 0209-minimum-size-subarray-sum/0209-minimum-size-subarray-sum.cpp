class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       // Sliding window 
       int n = nums.size() ;
       int left = 0 ,sum = 0 ;
       int mimi = INT_MAX ;
       for(int i=0;i<n;i++){ 
         sum = sum + nums[i] ;
         while(sum >= target){
            mimi = min(mimi, i-left+1) ; // ans update
            sum -= nums[left] ; // window choto kora
            left++ ;
         }
       }
       return mimi == INT_MAX ? 0 : mimi ;  // na pele 0 ans hobe..
    }
};