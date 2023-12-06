class Solution {
public:
    int solve(int ind,int prev,vector<int>& nums,vector<vector<int>> &dp)
    {
        if(ind==nums.size())return 0;
        if(dp[ind][prev+1]!=-1)return dp[ind][prev+1];
        int take=0,nottake=solve(ind+1,prev,nums,dp);
        if(prev==-1||nums[ind]>nums[prev])
        take=1+solve(ind+1,ind,nums,dp);
      //  if(prev==-1)return max(take,nottake);
        return dp[ind][prev+1]=max(take,nottake);
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>> dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        return solve(0,-1,nums,dp);
        
    }
};