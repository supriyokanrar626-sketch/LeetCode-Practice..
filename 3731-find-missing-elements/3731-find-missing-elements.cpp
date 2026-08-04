class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> arr;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int mini = nums[0] , maxi = nums[n-1];
        for(int i=mini; i<=maxi;i++){
            if(find(nums.begin(),nums.end(),i) == nums.end()){
                arr.push_back(i);
            }
        }
        return arr;
    }
};