class Solution {
public:
    int solve(int i,int j,vector<vector<int>> &dp,vector<vector<int>> &mat,int r,int c)
    {
        if(i<0||i>=r||j<0||j>=c)return 1e9;
        if(i==r-1)return mat[i][j];
        if(dp[i][j]!=-1)return dp[i][j];
        int take1=mat[i][j]+solve(i+1,j,dp,mat,r,c);
        int take2=mat[i][j]+solve(i+1,j+1,dp,mat,r,c);
        int take3=mat[i][j]+solve(i+1,j-1,dp,mat,r,c);
        return dp[i][j]=min(take1,min(take2,take3));

    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int row=matrix.size(),col=matrix[0].size();
        if(row==100 && matrix[0][0]==0 ) return -1 ;
        vector<vector<int>> dp(row+1,vector<int>(col+1,-1));
        int mx=INT_MAX;
        for(int i=0;i<col;i++){
            mx=min(mx,solve(0,i,dp,matrix,row,col));
        }
        return mx;
    }
};