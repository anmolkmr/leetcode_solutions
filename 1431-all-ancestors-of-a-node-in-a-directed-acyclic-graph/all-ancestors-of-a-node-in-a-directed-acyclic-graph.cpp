class Solution {
public:
    void dfs(int v,map<int,vector<int>> &adj,vector<bool> &vis){
        vis[v]=true;
        for(auto it:adj[v])
        {
            if(!vis[it]){
                dfs(it,adj,vis);
            }
        }
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        map<int,vector<int>> adj;
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
    }
    vector<vector<int>> ans(n);
    for(int i=0;i<n;i++){
        vector<bool> vis(n,false);
        dfs(i,adj,vis);
        for(int j=0;j<n;j++){
            if(i==j)continue;
            if(vis[j])   
            ans[j].push_back(i);
        }
    }
    return ans;

}};