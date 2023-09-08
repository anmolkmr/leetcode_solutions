class Solution {
public:
    int solve(int ind,vector<int> &cost,vector<int> &dp)
    {
        if(ind<0)return 0;
        if(ind==0||ind==1)return cost[ind];
        if(dp[ind]!=-1)return dp[ind];

        int l=cost[ind]+solve(ind-1,cost,dp);
        int r=cost[ind]+solve(ind-2,cost,dp);
        return dp[ind]=min(l,r);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int ind=cost.size();
        vector<int> dp(ind+1,-1);
        return min(solve(ind-1,cost,dp),solve(ind-2,cost,dp));

    }
};