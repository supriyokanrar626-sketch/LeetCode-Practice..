class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans ;
        int total = 1 << n ; // ata 2^n dicche..
        for(int i=0;i<total;i++){
            int gray = i ^ (i >> 1) ; // i ke nijer sathe right-shift kore XOR koro..
            ans.push_back(gray);  // i<<1 korle, dan dike extra bit add hobe.. tai kora jabe na.. 
        }
        return ans ;
    }
};

// 2 -> 10 -> i>>1 -> 01 -> ^ -> 11 ..ans..