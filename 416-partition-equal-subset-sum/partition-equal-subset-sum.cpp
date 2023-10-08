class Solution {
public:
    bool solve(int ind,int tar,vector<int> &nums,vector<vector<int>> &dp)
    {
        if(tar==0)return true;
        if(ind==0)return nums[ind]==tar;
        if(dp[ind][tar]!=-1)return dp[ind][tar];
        bool nottake=solve(ind-1,tar,nums,dp);
        bool take=false;
        if(nums[ind]<=tar)
        take=solve(ind-1,tar-nums[ind],nums,dp);
        return dp[ind][tar]=take|nottake;
    }
    bool canPartition(vector<int>& nums) {
        int target=0;
        for(auto it:nums)
        target+=it;
        if(target%2!=0)return false;
        int n=nums.size(),tar=target/2;
        vector<vector<int>> dp(n+1,vector<int>(tar+1,-1)); 
        return solve(n-1,tar,nums,dp);
    }
};