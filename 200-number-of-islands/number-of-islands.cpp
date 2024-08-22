class Solution {
public:
    void solve(int i,int j,vector<vector<char>> &grid,vector<vector<int>> &vis){
        vis[i][j]=1;
        vector<int> dx={0,0,-1,1};
        vector<int> dy={-1,1,0,0};

        for(int k=0;k<4;k++){
            int newx=i+dx[k];
            int newy=j+dy[k];
            if(newx>=0&&newy>=0&&newx<grid.size()&&newy<grid[0].size()&&grid[newx][newy]=='1'&&!vis[newx][newy])
            {
                solve(newx,newy,grid,vis);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size(),col=grid[0].size();
        int cnt=0;
        vector<vector<int>> vis(row,vector<int>(col,0));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'&&!vis[i][j])
                {solve(i,j,grid,vis);
                cnt++;}
            }
        }
        return cnt;


    }
};



