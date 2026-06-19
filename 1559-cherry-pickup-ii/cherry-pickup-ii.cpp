class Solution {
public:
    int solve(int i,int j,int k,vector<vector<int>> &grid,vector<vector<vector<int>>> &dp){
        if(i<0||j<0||k<0||i>=grid.size()||j>=grid[0].size()||k>=grid[0].size())return 0;
        if(i==grid.size())return 0;
        if(j==k)return grid[i][j];
        int mx=0;
        if(dp[i][j][k]!=-1)return dp[i][j][k];

        vector<int> dx={-1,0,1};
        for(int b=0;b<3;b++){
            for(int c=0;c<3;c++){
            int pick=grid[i][j]+grid[i][k]+solve(i+1,j+dx[b],k+dx[c],grid,dp);
            mx=max(pick,mx);
            }
        }
        return dp[i][j][k]=mx;


    }
    int cherryPickup(vector<vector<int>>& grid) {
        vector<vector<vector<int>>> dp(grid.size(),vector<vector<int>>(grid[0].size(),vector<int>(grid[0].size(),-1)));
        return solve(0,0,grid[0].size()-1,grid,dp);
    }
};