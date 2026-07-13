class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s = "123456789" ;
        int n = s.size() ;
        vector<int> ans;
        for(int i=2;i<10;i++){
            for(int j=0;j<=n-i;j++){
                int digi = stoi(s.substr(j, i));

                if(digi >= low && digi <= high){
                    ans.push_back(digi) ;
                }
            }
        }
        return ans ;
    }
};