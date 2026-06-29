class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size() ;
        unordered_set<int> st ; // current window..
        int i=0 , j=0 ;
        while(j < n){
            if(st.count(nums[j])){ // jodi j ar element window te age thekei thake
                return true ;
            }
            st.insert(nums[j]) ; // na thakle j ke add koro

            if(j-i+1 > k){
                st.erase(nums[i]); // i ke ber kore dao
                i++ ; // left ke agia dao
            }
            j++ ; // window agao
        }
        return false ;
    }
};