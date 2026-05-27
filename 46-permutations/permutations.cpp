class Solution {
public:
    void solve(vector<int> &ds,vector<vector<int>> &ans,vector<int> &nums,vector<int> &vis){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return ;
        }
        for(int i=0;i<nums.size();i++){
            if(vis[i]==0){
                vis[i]=1;
                ds.push_back(nums[i]);
                solve(ds,ans,nums,vis);
                ds.pop_back();
                vis[i]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds,vis(nums.size());
        solve(ds,ans,nums,vis);
        return ans;
    }
};