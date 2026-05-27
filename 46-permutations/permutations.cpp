class Solution {
public:
    void solve(int ind,vector<vector<int>> &ans,vector<int> &nums){
        if(ind==nums.size()){
            ans.push_back(nums);
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[ind],nums[i]);
            solve(ind+1,ans,nums);
            swap(nums[ind],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(0,ans,nums);
        return ans;
    }
};