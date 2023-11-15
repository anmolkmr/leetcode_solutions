class Solution {
public:
    int findCircleNum(vector<vector<int>>& isco) {
        int n=isco.size();
        vector<vector<int>> adj;
        for(int i=0;i<n;i++)
        {
            vector<int> temp;
            for(int j=0;j<n;j++)
            {
                if(isco[i][j]==1&&i!=j)
                {
                    temp.push_back(j);
                }
            }
            adj.push_back(temp);        
        }
        queue<int> q;
        int cnt=0;
        vector<int> vis(n);
        for(int i=0;i<n;i++)
        {
        if(!vis[i]){
        q.push(i);
        vis[i]=1;
        cnt++;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(auto it:adj[node])
            {
                if(!vis[it])
                {
                    vis[it]=1;
                    q.push(it);
                }
            }

        }
        }
        }
        return cnt;
    }
};