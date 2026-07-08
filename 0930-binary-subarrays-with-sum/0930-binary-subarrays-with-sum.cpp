class Solution {
public:
    int atMost(vector<int>& nums, int k){  // sum <= k amon sub array kota ache seta bar koara.. ai fucntion ar kaj...
        int n = nums.size() ;   // sum == k direct count korle 0 ar jonno jamela hobe..
        if(k < 0) return 0 ;
        int i=0 , j=0 , sum = 0 , count = 0 ;
        while(j < n){
            sum += nums[j] ;
            j++ ;

            while(sum > k){
                sum -= nums[i]; // window sum > k hole left theke element bad dite thakbo...
                i++ ;
            }
            count += j-i ; // mane right fixed rekhe , left theke right porjonto jotogulo sure point paoa jai , sob gulo valid.. 
        }
        return count ;  // loop ses e amader kache sum <= k ar total count ache..
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int tom = atMost(nums, goal) ;  // exactly goal ar theke choto sob subarray.. sum <= goal koto gulo ache ber korlam..
        int jerry = atMost(nums, goal-1) ; // sum <= goal-1 kota ache otao ber korlam..
        return tom-jerry ;  //  ata sum == goal debe...
    }
};