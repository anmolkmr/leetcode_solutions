class Solution {
public:
    int solve(int ind,vector<int> &nums,vector<int> &dp)
    {
        if(ind==0)return nums[0];
        if(ind<0)return 0;
        if(dp[ind]!=-1)return dp[ind];
        int nottake=solve(ind-1,nums,dp);
        int take=nums[ind]+solve(ind-2,nums,dp);
        return dp[ind]=max(take,nottake);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        int ind=nums.size()-1;
        return solve(ind,nums,dp);
    }
};