class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size(); // INT_MIN ar bodole -1e9 neoa jeto..
        int i=0 , j=0 ;
        double sum = 0 , ans = INT_MIN ; // array te -ve num thakle ..tai INT_MIN nilam..
        while(j < n){
            sum += nums[j] ; // window te add korlam..

            if(j-i+1 < k){  // window size k ar kom hole only j barbe..
                j++;
            }
            else if(j-i+1 == k){
                ans = max(ans, sum) ; // kaj koro
                sum -= nums[i] ; // i ke soria dao
                i++; j++ ; /// window slide koro
            }
        }
        return ans/k ; // avg return korchi
    }
};