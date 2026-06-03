class Solution {
public:
    int solve(int i,int j,int r,int c,vector<vector<int>> &grid,vector<vector<int>> &dp){
        if(i==r&&j==c){
            return grid[i][j];
        }
        if(dp[i][j]!=-1)return dp[i][j];
        int w1=INT_MAX,w2=INT_MAX;
        if(i+1>=0&&j>=0&&i+1<=r&&j<=c){
            w1=grid[i][j]+solve(i+1,j,r,c,grid,dp);
        }
        if(i>=0&&j+1>=0&&i<=r&&j+1<=c){
            w2=grid[i][j]+solve(i,j+1,r,c,grid,dp);
        }
        return dp[i][j]=min(w1,w2);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int row=grid.size(),col=grid[0].size();
        vector<vector<int>> dp(row,vector<int>(col,-1));
        return solve(0,0,row-1,col-1,grid,dp);
    }
};