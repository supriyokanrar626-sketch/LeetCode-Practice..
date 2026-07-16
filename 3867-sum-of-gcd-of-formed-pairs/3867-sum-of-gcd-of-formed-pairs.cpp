class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> arr(n) ;
        int maxi = 0 ;

        for(int i=0;i<n;i++){
            maxi = max(maxi, nums[i]) ;
            arr[i] = gcd(nums[i], maxi) ;
        }

        sort(arr.begin(), arr.end()) ;

        long long ans = 0 ;
        int left = 0 , right = n-1 ;

        while(left < right){
            ans += gcd(arr[left], arr[right]) ;
            left++;
            right--;
        }
        return ans ;
    }
};