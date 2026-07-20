class Solution { // n element thakle 2^n ta sub set hoi..
public:
    vector<vector<int>> ans ; // sob element ata te joma ache..
    vector<int> subset ; // akon je subset ta banacchi tar element ate thakbe
    
    void solve(vector<int>& nums, int i){ // i mane akon kon element te amra achi
        // if(i == nums.size()) {  // jodi array ar sob element amra nia ni
            ans.push_back(subset) ; // oi subset e store element ke ans te rakbo ar..
        //     return ; // store kore abar fire asbo..
        // }

        for(int j=i; j<nums.size(); j++){
            if(j>i && nums[j] == nums[j-1]) continue ;

            subset.push_back(nums[j]); // i no element ke subset te pathabo..
            solve(nums, j+1) ; // or porer element keo pathabo.. Recursive call..
        
            subset.pop_back() ; // Backtracking.. ager ele ar sathe next ele match hoi gele new element ke nebo na ar.. fele debo ota..
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()) ;
        solve(nums, 0) ;
        return ans ;
    }
};

