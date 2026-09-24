class Solution {
public:
    int f(int n){
        int sum = 0 ;
        while(n > 0){
            int rem = n%10;
            sum = sum + rem ;
            n /= 10 ; 
        }
        return sum ;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            // f(nums[i]) ;
            if(f(nums[i]) == i){
                return i ;
            }
        }
        return -1 ;
    }
};