class Solution {
public:
    int solve(int ind,int buy,vector<int>& p,int f,vector<vector<int>> &dp)
    {
        if(ind>=p.size())return 0;
        if(dp[ind][buy]!=-1)return dp[ind][buy];
        int profit;
        if(buy)
        {
            profit= max(-p[ind]+solve(ind+1,0,p,f,dp),solve(ind+1,1,p,f,dp));
        }
        else
        {
            profit= max(p[ind]-f+solve(ind+1,1,p,f,dp),solve(ind+1,0,p,f,dp));
        }
        return dp[ind][buy]=profit;
    }
    int maxProfit(vector<int>& prices, int fee) {
        vector<vector<int>> dp(prices.size()+1,vector<int>(4,-1));
        return solve(0,1,prices,fee,dp);
    }
};