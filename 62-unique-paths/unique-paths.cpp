class Solution {
public:
    int solve(int i,int j,int m,int n,vector<vector<int>> &dp){
        if(i==m-1&&j==n-1)return 1;
        int w1=0,w2=0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(i+1<m&&j<n)
        w1=solve(i+1,j,m,n,dp);
        if(i<m&&j+1<n)
        w2=solve(i,j+1,m,n,dp);

        return dp[i][j]= w1+w2;

    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return solve(0,0,m,n,dp);
    }
};