class Solution {
public:
    void solve(int ind,vector<int> &ds,vector<int> &nums,vector<vector<int>> &ans){
        if(ind>=nums.size()){
            ans.push_back(ds);
            return ;
        }
        ds.push_back(nums[ind]);
        solve(ind+1,ds,nums,ans);
        ds.pop_back();
        solve(ind+1,ds,nums,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        solve(0,ds,nums,ans);
        return ans;
    }
};