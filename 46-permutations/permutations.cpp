class Solution {
public:
    void solve(vector<int> &ds,vector<int> &vis,vector<vector<int>> &ans,vector<int> &nums){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return ;
        }
        for(int i=0;i<nums.size();i++){
            if(!vis[i]){
            vis[i]=1;
            ds.push_back(nums[i]);
            solve(ds,vis,ans,nums);
            ds.pop_back();
            vis[i]=0;}
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> vis(n,0);

        solve(ds,vis,ans,nums);
        return ans;

    }
};