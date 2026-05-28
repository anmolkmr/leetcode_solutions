class Solution {
public:
    int solve(int n,vector<int> &dp){
        if(n==0)return 1;
        if(n<0)return 0;
        if(dp[n]!=-1)return dp[n];
        int w1=solve(n-1,dp);
        int w2=solve(n-2,dp);
        return dp[n]=w1+w2;
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return solve(n,dp);
    }
};