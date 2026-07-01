#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
        queue<pair<int,int>> q;

        // Step 1: Multi-source BFS from thieves
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j] == 1) {
                    dist[i][j] = 0;
                    q.push({i,j});
                }
            }
        }

        int dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
        while(!q.empty()) {
            auto [x,y] = q.front(); q.pop();
            for(auto &d : dirs) {
                int nx = x + d[0], ny = y + d[1];
                if(nx>=0 && ny>=0 && nx<n && ny<n && dist[nx][ny] > dist[x][y] + 1) {
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx,ny});
                }
            }
        }

        // Step 2: Binary search on safeness factor
        int low = 0, high = 2*n, ans = 0;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(canReach(dist, mid)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }

    bool canReach(vector<vector<int>>& dist, int safeness) {
        int n = dist.size();
        if(dist[0][0] < safeness) return false;

        queue<pair<int,int>> q;
        vector<vector<bool>> vis(n, vector<bool>(n,false));
        q.push({0,0});
        vis[0][0] = true;

        int dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
        while(!q.empty()) {
            auto [x,y] = q.front(); q.pop();
            if(x==n-1 && y==n-1) return true;
            for(auto &d : dirs) {
                int nx = x + d[0], ny = y + d[1];
                if(nx>=0 && ny>=0 && nx<n && ny<n && !vis[nx][ny] && dist[nx][ny] >= safeness) {
                    vis[nx][ny] = true;
                    q.push({nx,ny});
                }
            }
        }
        return false;
    }
};
