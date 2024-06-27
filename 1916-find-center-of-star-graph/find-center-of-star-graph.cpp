class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,vector<int>> adj;
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        for(auto it:adj){
            if(it.second.size()==edges.size())
            return it.first;
        }
        return 0;

    }
};