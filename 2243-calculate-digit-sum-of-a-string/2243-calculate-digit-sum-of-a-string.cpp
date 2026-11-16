class Solution {
public:
    string digitSum(string s, int k) {
        
        while(s.size() > k){
            int n = s.size(); vector<int> v(n+1,0);

            for(int i=0;i<n;i++){
                v[i+1] = v[i] + (s[i]-'0');
            }

            string t = "";
            for(int i=0;i<n;i+=k){
                int end = min(i+k,n);
                int sum = v[end] - v[i];

                t += to_string(sum);
            }
            s = t;
        }
        return s ;
    }
};