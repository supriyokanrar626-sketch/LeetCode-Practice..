class Solution { // n element thakle 2^n ta sub set hoi..
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int total = 1 << n; // ata 2^n dicche..
        vector<vector<int>> ans ;

        for(int bit=0; bit<total; bit++){
            vector<int> subset ;

            for(int i=0;i<n;i++){
                if((bit >> i) & 1){ // i th bit 1 kina check kora.. (n>>i)&1 formula..
                    subset.push_back(nums[i]) ;
                }
            }
            ans.push_back(subset) ;
        }
        return ans ;
    }
};