class Solution {
public:
    void solve(int ind,vector<int> &ds,vector<vector<int>> &ans,vector<int> &nums){
        if(ind==nums.size()){
            ans.push_back(nums);
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[ind],nums[i]);
            solve(ind+1,ds,ans,nums);
            swap(nums[ind],nums[i]);
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        vector<int> ds;

        solve(0,ds,ans,nums);
        return ans;

    }
};