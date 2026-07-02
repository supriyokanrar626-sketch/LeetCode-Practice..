class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m = grid.size(), n = grid[0].size();
        constexpr int dirs[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
        
        // Initial health after starting cell
        int startHealth = health - grid[0][0];
        if(startHealth <= 0) return false;

        using State = tuple<int,int,int>; // (row, col, health)
        queue<State> q;
        q.push({0,0,startHealth});

        // Seen states: visited with specific health
        vector<vector<vector<bool>>> seen(
            m, vector<vector<bool>>(n, vector<bool>(health+1,false))
        );
        seen[0][0][startHealth] = true;

        while(!q.empty()) {
            auto [i,j,h] = q.front(); q.pop();
            if(i == m-1 && j == n-1 && h > 0) return true;
               for(auto &d : dirs) {
                int x = i + d[0], y = j + d[1];
                if(x<0 || y<0 || x>=m || y>=n) continue;
                int nextHealth = h - grid[x][y];
                if(nextHealth <= 0) continue;
                if(seen[x][y][nextHealth]) continue;
                seen[x][y][nextHealth] = true;
                q.push({x,y,nextHealth});
            }
        }
        return false;        
    }
};