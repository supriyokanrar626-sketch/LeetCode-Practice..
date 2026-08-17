class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        // for(int i=0;i<n;i++){
        //     if(nums[i] == 0){
        //         int j = i ;
        //         while(j>0 && nums[j-1] != 0){
        //         swap(nums[j], nums[j-1]);
        //         j--;
        //         }
        //     } else if(nums[i] == 1){
        //         int j = i ;
        //         while(j>0 && nums[j-1] == 2){
        //         swap(nums[j], nums[j-1]);
        //         j--;
        //         }
        //     }
        // }

        int i = 0 ;
        int curr = 0;
        int j = n-1;
        while(curr <= j){
            if(nums[curr] == 0){
                swap(nums[i], nums[curr]);
                curr++;
                i++;
            } else if(nums[curr] == 1){
                curr++;
            }else {
                swap(nums[curr], nums[j]);
                j--;
            }
        }
    }
};