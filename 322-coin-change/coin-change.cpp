class Solution {
public:
    int solve(int ind,vector<int> &coins,int tot,vector<vector<int>> &dp)
    {
        if(ind==0)
        {
            if(tot%coins[0]==0)
                return tot/coins[0];
            return 1e9;
        }
        if(dp[ind][tot]!=-1)return dp[ind][tot];
        int notpick=0+solve(ind-1,coins,tot,dp);
        int pick=INT_MAX;
        if(tot>=coins[ind])
        pick=1+solve(ind,coins,tot-coins[ind],dp);
        return dp[ind][tot]=min(pick,notpick);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        int ans=solve(n-1,coins,amount,dp);
        if(ans>=1e9)return -1;
        return ans;
    }
};