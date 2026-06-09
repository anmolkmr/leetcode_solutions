class Solution {
public:
    bool solve(int ind,int tar,vector<int> &nums,vector<vector<int>> &dp){
        if(ind>=nums.size()){
            if(tar==0)
            return true;
            return false;
        }
        if(tar==0)return false;
        if(dp[ind][tar]!=-1)return dp[ind][tar];
        if(nums[ind]<=tar){
            if(solve(ind+1,tar-nums[ind],nums,dp)){
                return dp[ind][tar]= true;
            }
        }
        return dp[ind][tar]= solve(ind+1,tar,nums,dp);

    }
    bool canPartition(vector<int>& nums) {
        int totalSum=0;
        for(auto it:nums)
        totalSum+=it;
        if(totalSum%2)return false;
        int tar=totalSum/2;
        vector<vector<int>> dp(nums.size()+1,vector<int> (tar+1,-1)); 
        return solve(0,tar,nums,dp);
    }
};