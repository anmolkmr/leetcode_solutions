class Solution {
public:
    void solve(int ind,vector<int> ds,vector<int> &nums,set<vector<int>> &ans){
        if(ind>=nums.size()){
            ans.insert(ds);
            return;
        }
        ds.push_back(nums[ind]);
        solve(ind+1,ds,nums,ans);
        ds.pop_back();
        solve(ind+1,ds,nums,ans);
        // for(int i=ind;i<nums.size();i++){
        //     if(i>ind&&nums[i-1]==nums[i])continue;
        //     ds.push_back(nums[ind]);
        //     solve(i+1,ds,nums,ans);
        //     ds.pop_back();
        // }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        vector<vector<int>> ans2;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        solve(0,ds,nums,ans);
        for(auto it:ans)
        ans2.push_back(it);
        return ans2;
    }
};