class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size(); int ans = 0; const int mod = 1e9 + 7; int sum=0;int even =1, odd=0;
        for (int i = 0; i < n; i++) {
            sum += arr[i] ;

            if(sum%2 == 0){
                ans += odd;
                even++;
            } else {
                ans += even; odd++;
            }
            ans %= mod ;
        }
        return ans;
    }
};