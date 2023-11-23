class Solution {
public:
    int solve(int ind,int buy,int cnt,vector<int> &prices,vector<vector<vector<int>>> &dp)
    {
        if(ind>=prices.size())
        return 0;
        if(cnt==2)
        return 0;
        int profit;
        if(dp[ind][buy][cnt]!=-1)return dp[ind][buy][cnt];
        if(buy)
        {
           profit=max(-prices[ind]+solve(ind+1,0,cnt,prices,dp),solve(ind+1,1,cnt,prices,dp));
        }
        else{
           profit=max((prices[ind]+solve(ind+1,1,cnt+1,prices,dp)),solve(ind+1,0,cnt,prices,dp));
        }
        return dp[ind][buy][cnt]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(3,vector<int>(4,-1)));
        return solve(0,1,0,prices,dp);
    }
};