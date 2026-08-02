class Solution {
public:
    int solve(int i,int j,vector<int> &piles,vector<vector<int>> &dp){
        if(i>j)return 0;
        if(i==j)return piles[i];
        if(dp[i][j]!=-1)return dp[i][j];
        int pickLeft=piles[i]+min(solve(i+2,j,piles,dp),solve(i+1,j-1,piles,dp));
        int pickRight=piles[j]+min(solve(i+1,j-1,piles,dp),solve(i,j-2,piles,dp));
        return dp[i][j]=max(pickRight,pickLeft);
    }
    bool stoneGame(vector<int>& piles) {
        vector<vector<int>> dp(piles.size()+1,vector<int>(piles.size()+1,-1));
        int p1=solve(0,piles.size()-1,piles,dp),total=0;
        for(auto it:piles)total+=it;
        if(p1>total-p1)return true;
        return false;
        
    }
};