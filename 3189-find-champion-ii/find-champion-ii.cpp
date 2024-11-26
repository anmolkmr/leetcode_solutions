class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<bool> vis(n);
        for(auto it:edges){
            vis[it[1]]=true;
        }
        int ans=-1;
        for(int i=0;i<vis.size();i++){
            if(!vis[i]){
                if(ans!=-1)
                return -1;
                ans=i;
            }
        }
        return ans;
    }
};