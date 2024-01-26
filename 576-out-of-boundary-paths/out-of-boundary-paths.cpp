class Solution {
public:
    long long l=1000000007;
    int solve(int i,int j,vector<vector<vector<int>>> &dp,int move,int m,int n)
    {
        if(move<0)return 0;
        
        if(i<0||i>=m||j<0||j>=n)
        {
            return 1;
        }
        if(dp[i][j][move]!=-1)return dp[i][j][move];
        int up=solve(i-1,j,dp,move-1,m,n)%l;
        int down=solve(i+1,j,dp,move-1,m,n)%l;
        int left=solve(i,j-1,dp,move-1,m,n)%l;
        int right=solve(i,j+1,dp,move-1,m,n)%l;
        return dp[i][j][move]=((up+down)%l+(left+right)%l)%l;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>> dp(m,vector<vector<int>>(n,vector<int>(maxMove+1,-1))); 
        return solve(startRow,startColumn,dp,maxMove,m,n);
    }
};