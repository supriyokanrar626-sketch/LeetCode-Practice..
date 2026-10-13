class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size() ;
        vector<long long> arr ;
        for(int x : nums){
            arr.push_back(1LL*x*x) ;
        }
        int k = n/2 ; sort(arr.begin(),arr.end()) ; long long sum = 0 ;

        for(int i=k;i<n;i++){
            sum += arr[i] ;
        } 
        for(int i=0;i<k;i++){
            sum -= arr[i] ;
        }
        return sum ;
    }
};