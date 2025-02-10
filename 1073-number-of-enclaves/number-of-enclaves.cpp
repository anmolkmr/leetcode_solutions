class Solution {
public:
    void bfs(int i,int j,vector<vector<int>> &vis,vector<vector<int>> &grid,int r,int c){
        vector<int> dx={1,-1,0,0};
        vector<int> dy={0,0,1,-1};
        vis[i][j]=1;
        for(int k=0;k<4;k++){
            int newx=i+dx[k];
            int newy=j+dy[k];
            if(newx>=0&&newx<r&&newy>=0&&newy<c&&!vis[newx][newy]&&grid[newx][newy]==1){
                bfs(newx,newy,vis,grid,r,c);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        
        int row=grid.size(),col=grid[0].size();
        vector<vector<int>> vis(row,vector<int>(col,0));
        for(int i=0;i<row;i++){
            if(grid[i][0]==1){
                bfs(i,0,vis,grid,row,col);
            }
            if(grid[i][col-1]==1){
                bfs(i,col-1,vis,grid,row,col);
            }
        }
        for(int i=0;i<col;i++){
            if(grid[0][i]==1){
                bfs(0,i,vis,grid,row,col);
            }
            if(grid[row-1][i]==1){
                bfs(row-1,i,vis,grid,row,col);
            }
        }
        int cnt=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<vis[i][j]<<" ";
                if(vis[i][j]==0&&grid[i][j]==1)
                cnt++;
            }
            cout<<endl;
        }
        return cnt;
    }
};