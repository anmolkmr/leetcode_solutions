class Solution {
public:
    void solve(int ind,vector<int>& nums,vector<vector<int>> &ans,vector<int>t){
        if(ind>=nums.size())
        {
            ans.push_back(t);
            return ;
        }
        t.push_back(nums[ind]);
        solve(ind+1,nums,ans,t);
        t.pop_back();
        solve(ind+1,nums,ans,t);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> t;
        solve(0,nums,ans,t);
        return ans;

    }
};