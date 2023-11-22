class Solution {
public:
    int solve(int ind,bool buy,vector<int> &prices,vector<vector<int>> &dp)
    {
        int profit;
        if(ind>=prices.size())return 0;
        if(dp[ind][buy]!=-1)return dp[ind][buy];
        if(buy)
        {
            dp[ind][buy]=profit=max((-prices[ind]+solve(ind+1,false,prices,dp)),solve(ind+1,true,prices,dp));
        }
        else{
           dp[ind][buy]=profit=max((prices[ind]+solve(ind+1,true,prices,dp)),solve(ind+1,false,prices,dp));
        }
        return dp[ind][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=0;
        vector<vector<int>> dp(prices.size()+1,vector<int>(4,-1));
        return solve(n,true,prices,dp);
    }
};