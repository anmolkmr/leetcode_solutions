class Solution {
public:
    void dfs(int node,vector<int> &vis,vector<vector<int>> &adj)
    {
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
            dfs(it,vis,adj);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<vector<int>> adj;
        for(int i=0;i<isConnected.size();i++)
        {
            vector<int> temp;
            for(int j=0;j<isConnected.size();j++)
            {
                if(isConnected[i][j]!=0)
                {
                    temp.push_back(j);
                }
            }
            adj.push_back(temp);
        }
        int n=adj.size();
        int cnt=0;
        vector<int> vis(n);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                cnt++;
                dfs(i,vis,adj);
            }
        }
        return cnt;
    }
};