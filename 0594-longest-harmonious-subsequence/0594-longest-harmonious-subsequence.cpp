class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ; // sort korlam
        int n = nums.size();
        int i=0 , j=0 ;
        int maxi = 0 ;
        while(j < n){
            int diff = nums[j] - nums[i] ; // difference nilam 

            if(diff == 1){
                maxi = max(maxi, j-i+1) ; // 
                j++;
            }
            else if(diff == 0){
                j++ ; // window boro koro
            } else { // diff > 1
                i++; // window choto koro..
            }
        }
        return maxi ;
    }
};