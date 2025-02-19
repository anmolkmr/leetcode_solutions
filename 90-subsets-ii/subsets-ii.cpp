class Solution {
public:
    void solve(int ind,vector<int> &nums,vector<int> &ds,set<vector<int>> &ans){
        if(ind>=nums.size()){
            ans.insert(ds);
            return ;
        }
        ds.push_back(nums[ind]);
        solve(ind+1,nums,ds,ans);
        ds.pop_back();
        solve(ind+1,nums,ds,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        solve(0,nums,ds,ans);
        vector<vector<int>> ans2;
        for(auto it:ans){
            ans2.push_back(it);
        }
        return ans2;
    }
};