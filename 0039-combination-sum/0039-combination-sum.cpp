class Solution {
public:
    vector<vector<int>> ans ; // sob element ata te joma ache..
    vector<int> subset ; // akon je subset ta banacchi tar element ate thakbe

    void solve(vector<int>& candidates, int target, int i){ // i mane akon kon element te amra achi
        if(target == 0) {  // target jokhon 0 hoi jai..
            ans.push_back(subset) ; // oi subset e store element ke ans te rakbo ar..
            return ; // store kore abar fire asbo..
        }

        if(target < 0 || i == candidates.size()) return ; // -ve ba array ses hoi gele return kore jabo..

        for(int j=i; j<candidates.size(); j++){
            if(candidates[j] > target) continue ;

            subset.push_back(candidates[j]); // i no element ke subset te pathabo..
            solve(candidates, target - candidates[j], j) ; // or porer element keo pathabo.. Recursive call..
        
            subset.pop_back() ; // Backtracking.. ager ele ar sathe next ele match hoi gele new element ke nebo na ar.. fele debo ota..
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(candidates, target, 0) ;
        return ans ;
    }
};