class Solution {
public:
    int solve(int ind,vector<int> nums,vector<int> &dp){
        if(ind<0)return 0;
        if(ind==0)
        return nums[ind];
        if(dp[ind]!=-1)
        return dp[ind];
        int pick=nums[ind]+solve(ind-2,nums,dp);
        int nopick=solve(ind-1,nums,dp);
        return dp[ind]=max(pick,nopick);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return solve(nums.size()-1,nums,dp);
    }
};