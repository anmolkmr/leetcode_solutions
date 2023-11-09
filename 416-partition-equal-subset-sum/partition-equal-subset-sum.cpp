class Solution {
public:
    bool solve(int ind,int tar,vector<int>& nums,vector<vector<int>>& dp)
    {
        if(tar==0)return true;
        if(ind==0)
        {
            if(tar==nums[0])
            return true;
            return false;
        }
        if(dp[ind][tar]!=-1)return dp[ind][tar];
        int nottake=solve(ind-1,tar,nums,dp);
        int take=false;
        if(tar>=nums[ind])
        take=solve(ind-1,tar-nums[ind],nums,dp);
        return dp[ind][tar]=take||nottake;
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto it:nums)
        {
            sum+=it;
        }
        if(sum%2!=0)return false;
        int tar=sum/2;
        int len=nums.size();
        vector<vector<int>> dp(len,vector<int>(tar+1,-1));
        return solve(len-1,tar,nums,dp);

    }
};