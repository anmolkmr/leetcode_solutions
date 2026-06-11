class Solution {
public:
    int solve(int ind,int amt,vector<int> &coins,vector<vector<int>> &dp){
        if(ind==coins.size()){
            if(amt==0)return 1;
            return 0;
        }
        if(amt==0)return 1;
        if(dp[ind][amt]!=-1)return dp[ind][amt];
        int pick=0,notpick=0;
        if(coins[ind]<=amt){
            pick=solve(ind,amt-coins[ind],coins,dp);
        }
        notpick=solve(ind+1,amt,coins,dp);
        return dp[ind][amt]=pick+notpick;
        }
    
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size()+1,vector<int>(amount+1,-1));
        return solve(0,amount,coins,dp);
    }
};