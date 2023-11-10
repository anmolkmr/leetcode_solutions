class Solution {
public:
    int solve(int ind,vector<int>& coins,int amt,vector<vector<int>> &dp)
    {
        if(ind==0)
        {
            if(amt%coins[ind]==0)
            return amt/coins[ind];
            return 1e9;
        }
        if(dp[ind][amt]!=-1)return dp[ind][amt];
        int ntake=solve(ind-1,coins,amt,dp);
        int take=1e9;
        if(amt>=coins[ind])
        {
            take=1+solve(ind,coins,amt-coins[ind],dp);
        }
        return dp[ind][amt]=min(take,ntake);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int>(amount+1,-1));
        int ans=solve(n-1,coins,amount,dp);
        if(ans>=1e9)
        return -1;
        return ans;
    }
};