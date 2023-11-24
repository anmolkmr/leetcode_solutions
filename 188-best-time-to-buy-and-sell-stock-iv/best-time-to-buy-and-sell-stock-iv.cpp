class Solution {
public:
    int solve(int ind,int buy,int k,vector<int> &p,vector<vector<vector<int>>> &dp)
    {
        if(ind==p.size()||k==0)return 0;
        int profit;
        if(dp[ind][buy][k]!=-1)return dp[ind][buy][k];
        if(buy)
        {
            profit=max(-p[ind]+solve(ind+1,0,k,p,dp),solve(ind+1,1,k,p,dp));
        }
        else
        {
            profit=max(p[ind]+solve(ind+1,1,k-1,p,dp),solve(ind+1,0,k,p,dp));
        }
        return dp[ind][buy][k]=profit;
    }
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(7,vector<int>(k+1,-1)));
        return solve(0,1,k,prices,dp);
    }
};