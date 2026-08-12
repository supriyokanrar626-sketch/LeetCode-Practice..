class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> arr ;
        int n = nums.size();
        int i=0 ,j=0, len = 0 ;
        while(j < n){
            arr[nums[j]]++; // map te store kora raklam..
            while(arr[nums[j]] > k){
                arr[nums[i]]--; // window theke oi element bad..
                i++; // window right a nia jabo
            }
            len = max(len, j-i+1);
            j++;
        }
        return len ;
    }
};