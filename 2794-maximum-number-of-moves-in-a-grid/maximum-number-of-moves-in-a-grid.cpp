class Solution {
public:
    int solve(int i,int j,vector<vector<int>> &grid,int r,int c,vector<vector<int>> &dp){
        if(i>=r||i<0||j>=c||j<0){
            return 0;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        int mx=0;
        if((i-1)<r&&(i-1)>=0&&(j+1)<c&&(j+1)>=0&&grid[i][j]<grid[i-1][j+1]){
            mx=max(mx,1+solve(i-1,j+1,grid,r,c,dp));
        }
        if((i+1)<r&&(i+1)>=0&&(j+1)<c&&(j+1)>=0&&grid[i][j]<grid[i+1][j+1]){
            mx=max(mx,1+solve(i+1,j+1,grid,r,c,dp));
        }
        if((i)<r&&(i)>=0&&(j+1)<c&&(j+1)>=0&&grid[i][j]<grid[i][j+1]){
            mx=max(mx,1+solve(i,j+1,grid,r,c,dp));
        }
        return dp[i][j]=mx;
        
    }
    int maxMoves(vector<vector<int>>& grid) {
        
        int row=grid.size(),col=grid[0].size(),res=0;
        vector<vector<int>> dp(row+1,vector<int>(col+1,-1));
        for(int i=0;i<row;i++){
            
            res=max(res,solve(i,0,grid,row,col,dp));
            cout<<res;
        }
        return res;
    }
};