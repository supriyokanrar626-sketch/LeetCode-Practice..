class Solution { // n element thakle 2^n ta sub set hoi..
public:
    vector<vector<int>> ans ; // sob element ata te joma ache..
    vector<int> subset ; // akon je subset ta banacchi tar element ate thakbe
    
    void solve(vector<int>& nums, int i){ // i mane akon kon element te amra achi
        if(i == nums.size()) {  // jodi array ar sob element amra nia ni
            ans.push_back(subset) ; // oi subset e store element ke ans te rakbo ar..
            return ; // store kore abar fire asbo..
        }

        subset.push_back(nums[i]); // i no element ke subset te pathabo..
        solve(nums, i+1) ; // or porer element keo pathabo.. Recursive call..
        
        subset.pop_back() ; // Backtracking.. ager ele ar sathe next ele match hoi gele new element ke nebo na ar.. fele debo ota..

        solve(nums, i+1) ; // abar next element ke call kore check koro
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        solve(nums, 0) ;
        return ans ;
    }
};




// class Solution { // n element thakle 2^n ta sub set hoi..
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         int n = nums.size();
//         int total = 1 << n; // ata 2^n dicche..
//         vector<vector<int>> ans ;

//         for(int bit=0; bit<total; bit++){
//             vector<int> subset ;

//             for(int i=0;i<n;i++){
//                 if((bit >> i) & 1){ // i th bit 1 kina check kora.. (n>>i)&1 formula..
//                     subset.push_back(nums[i]) ;
//                 }
//             }
//             ans.push_back(subset) ;
//         }
//         return ans ;
//     }
// };