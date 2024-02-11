class Solution {
public:
    int solve(int row,int c1,int c2,vector<vector<int>> &grid,int r,int c,vector<vector<vector<int>>> &dp){
        if(row<0||row>r||c1<0||c1>c||c2<0||c2>c)return 0;
        if(row==r){
            if(c1!=c2)
            return grid[row][c1]+grid[row][c2];
            else
            return grid[row][c1];
        }
        if(dp[row][c1][c2]!=-1)return dp[row][c1][c2];
        int p1=0,p2=0,p3=0,p4=0,p5=0,p6=0,p7=0,p8=0,p9=0;
        if(c1!=c2){
        p1=grid[row][c1]+grid[row][c2]+solve(row+1,c1-1,c2-1,grid,r,c,dp);
        p2=grid[row][c1]+grid[row][c2]+solve(row+1,c1,c2-1,grid,r,c,dp);
        p3=grid[row][c1]+grid[row][c2]+solve(row+1,c1+1,c2-1,grid,r,c,dp);
        p4=grid[row][c1]+grid[row][c2]+solve(row+1,c1-1,c2,grid,r,c,dp);
        p5=grid[row][c1]+grid[row][c2]+solve(row+1,c1,c2,grid,r,c,dp);
        p6=grid[row][c1]+grid[row][c2]+solve(row+1,c1+1,c2,grid,r,c,dp);
        p7=grid[row][c1]+grid[row][c2]+solve(row+1,c1-1,c2+1,grid,r,c,dp);
        p8=grid[row][c1]+grid[row][c2]+solve(row+1,c1,c2+1,grid,r,c,dp);
        p9=grid[row][c1]+grid[row][c2]+solve(row+1,c1+1,c2+1,grid,r,c,dp);   
        }
        return dp[row][c1][c2]=max(p1,max(p2,max(p3,max(p4,max(p5,max(p6,max(p7,max(p8,p9))))))));
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int col=grid[0].size(),row=grid.size();
        vector<vector<vector<int>>> dp(row,vector<vector<int>>(col,vector<int>(col,-1)));
        return solve(0,0,col-1,grid,row-1,col-1,dp);
    }
};