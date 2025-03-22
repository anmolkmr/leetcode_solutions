class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        map<int,vector<int>> adj;
        for(int i=0;i<n;i++){
            adj[i].push_back(i);
        }
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        map<vector<int>,int> count;
        for(auto it:adj){
            vector<int> temp=it.second;
            sort(temp.begin(),temp.end());
            count[temp]++;
        }
        int ans=0;
        for(auto it:count){
            if(it.first.size()==it.second)
            ans++;
        }
        return ans;

    }
};