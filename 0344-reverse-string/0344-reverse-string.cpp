class Solution {
public:
    void solve(vector<char>& s, int l, int r) {
        if(l >= r) return ;

        swap(s[l], s[r]) ; // 1st & last swap koro
        solve(s, l+1, r-1) ;
    }
    void reverseString(vector<char>& s){
        int l = 0 , r = s.size()-1 ; // ata tik ache.. ata kora jai , abar function create korte hobe...
        solve(s, l, r) ; // baki ta recursion..
    }
    
};