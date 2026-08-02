class Solution {
public:
    int solve(int i,vector<int> &nums,int j,vector<vector<int>> &dp){
        if(i>j)return 0;
        if(i==j)return nums[i];
        if(dp[i][j]!=-1)return dp[i][j];
        int pickLeft=nums[i]+min(solve(i+2,nums,j,dp),solve(i+1,nums,j-1,dp));
        int pickRight=nums[j]+min(solve(i+1,nums,j-1,dp),solve(i,nums,j-2,dp));
        return dp[i][j]=max(pickLeft,pickRight);
    }
    bool predictTheWinner(vector<int>& nums) {
        vector<vector<int>> dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        int n=solve(0,nums,nums.size()-1,dp),total=0;
        for(auto it:nums){
            total+=it;
        }
        int p2=total-n;
        if(n>=p2)return true;

        return false;
    }
};