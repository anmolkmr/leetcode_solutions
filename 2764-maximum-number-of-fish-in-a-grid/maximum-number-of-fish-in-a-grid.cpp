class Solution {
public:
    int dfs(int i,int j,vector<vector<int>> &vis,vector<vector<int>> &grid){
        int fish=grid[i][j];
        vis[i][j]=1;
        vector<int> dx={0,0,-1,1};
        vector<int> dy={-1,1,0,0};

        for(int k=0;k<4;k++){
            int newx=dx[k]+i;
            int newy=dy[k]+j;
            if(newx>=0&&newy>=0&&newx<grid.size()&&newy<grid[0].size()&&!vis[newx][newy]&&grid[newx][newy]>0){
                vis[newx][newy]=1;
                fish+=dfs(newx,newy,vis,grid);
            }
        }
        return fish;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int row=grid.size(),col=grid[0].size();
        vector<vector<int>> vis(row,vector<int>(col));
        int mx=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]>0&&!vis[i][j]){
                    mx=max(mx,dfs(i,j,vis,grid));
                }   
            }
        }
        return mx;
    }
};