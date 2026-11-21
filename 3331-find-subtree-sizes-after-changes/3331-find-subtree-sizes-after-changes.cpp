class Solution {
    int ancestor[128]={0};
    void update_parent(int node, vector<int>& parent, string &s, vector<vector<int>> &edges, vector<int> &ans)
    {
        char c = s[node];
        int original = ancestor[(int)c];
        if(original != 0) parent[node]=original-1;
        ancestor[c]=node+1;
        for(auto doughter: edges[node]) update_parent(doughter, parent, s, edges,ans);
        if(parent[node]!=-1) ans[parent[node]]+=ans[node];
        //cout << "node: " << node << " parent: " << parent[node] << " ans[node] " << ans[node] << " original: " << original << endl;
        ancestor[(int)c]=original;
    }
public:
    vector<int> findSubtreeSizes(vector<int>& parent, string s) {
        int n = s.size();
        vector<int> ans(n,1);
        vector<vector<int>> edges(n);
        for(int i = 1; i<n; i++) edges[parent[i]].push_back(i);
        update_parent(0, parent, s, edges,ans);
        return ans;
        
    }
};