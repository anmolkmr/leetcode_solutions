class Solution {
public:
    bool bfs(int n,vector<int>& vis,map<int,vector<int>>&adj,int k){
        queue<int> q;
        q.push(n);
        vis[n]=1;
        while(!q.empty()){
            int temp=q.front();
            q.pop();
        for(auto it:adj[temp]){
            if(!vis[it]){
                q.push(it);
                vis[it]=1;
            }
        }
        }
        if(vis[k])return true;
        return false;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        map<int,vector<int>> adj;
        map<int,int> nodes;
        for(auto it:edges){
            if(nodes[it[0]]>0&&nodes[it[1]]>0){
                cout<<"asd"<<it[0]<<it[1]<<endl;
                vector<int> vis(edges.size()+1);
                if(bfs(it[0],vis,adj,it[1])){
                    return it;
                }
            }
            // else{
                nodes[it[0]]++;
                nodes[it[1]]++;
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
            // }
        }
        return {0,0};
    }
};