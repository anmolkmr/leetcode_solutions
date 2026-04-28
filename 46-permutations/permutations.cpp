class Solution {
public:
    void solve(int ind,vector<int> ds,vector<int> &vis,vector<vector<int>> &ans,vector<int> &nums){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return ;
        }
        for(int i=0;i<vis.size();i++){
            if(vis[i]==0){
            vis[i]=1;
            ds.push_back(nums[i]);
            solve(i+1,ds,vis,ans,nums);
            ds.pop_back();
            vis[i]=0;}
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> vis(nums.size());
        vector<int> ds;
        solve(0,ds,vis,ans,nums);
        return ans;
    }
};