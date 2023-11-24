class Solution {
public: 
    int solve(int ind,int buy,vector<int> &p,vector<vector<int>> &dp)
    {
        if(ind>=p.size())return 0;
        if(dp[ind][buy]!=-1)return dp[ind][buy];
        if(buy)
        {
            return dp[ind][buy]=max(-p[ind]+solve(ind+1,0,p,dp),solve(ind+1,1,p,dp));
        }
        else{
            return dp[ind][buy]=max(p[ind]+solve(ind+2,1,p,dp),solve(ind+1,0,p,dp));
        }
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size()+1,vector<int>(3,-1));
        return solve(0,1,prices,dp);
        
    }
};