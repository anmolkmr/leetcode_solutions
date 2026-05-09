class Solution {
public:
    void solve(vector<int> ds,vector<int> &nums,vector<vector<int>> &ans,vector<int> &vis){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return ;
        }
        
        for(int i=0;i<nums.size();i++){
            
            if(vis[i]==0){
                vis[i]=1;
                ds.push_back(nums[i]);
                solve(ds,nums,ans,vis);
                ds.pop_back();
                vis[i]=0;
            }


        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> vis(nums.size());
        solve(ds,nums,ans,vis);
        return ans;
    }
};