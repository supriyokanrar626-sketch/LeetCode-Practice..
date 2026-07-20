class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size(); // row numbers.. m = 3 
        int n = grid[0].size(); // coiumn numbers.. n = 3
        int total = m*n ; // total element 3*3 = 9
        k = k%total ; // jodi k>total hoi..k=10 hole..k=1 nia korbo..
        vector<int> store ; // empty 1D array banano..

        for(int i=0; i<m; i++){
            for(int j=0;j<n;j++){
                store.push_back(grid[i][j]) ; // 2D grid ke 1D te convert kore store kora..
            }
        }

        vector<int> shift(total) ; // ar akta 1D vector banabo shifted ar jonno..
        for(int i=0;i<total;i++){
            shift[(i+k)%total] = store[i]; // ata shift ar formula..
        }

        vector<vector<int>> ans(m, vector<int>(n)); // m*n size ar faka 2D array
        for(int i=0;i<total;i++){
            ans[i/n][i%n] = shift[i]; // shift ar 1D idx ke 2D idx kora
        }
        return ans ; // last te 2D array print korbo..
    }
};