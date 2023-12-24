class Solution {
public:
    void trav(int i,int j,vector<vector<int>> &vis,int row,int col,vector<vector<char>> &grid)
    {
        vis[i][j]=1;
        if(i+1>=0&&i+1<row&&j>=0&&j<col&&!vis[i+1][j]&&grid[i+1][j]=='1')
        trav(i+1,j,vis,row,col,grid);
        if(i>=0&&i<row&&j+1>=0&&j+1<col&&!vis[i][j+1]&&grid[i][j+1]=='1')
        trav(i,j+1,vis,row,col,grid);
        if(i>=0&&i<row&&j-1>=0&&j-1<col&&!vis[i][j-1]&&grid[i][j-1]=='1')
        trav(i,j-1,vis,row,col,grid);
        if(i-1>=0&&i-1<row&&j>=0&&j<col&&!vis[i-1][j]&&grid[i-1][j]=='1')
        trav(i-1,j,vis,row,col,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size(),col=grid[0].size();
        vector<vector<int>> vis(row,vector<int>(col));
        int island=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(!vis[i][j]&&grid[i][j]=='1')
                {island++;
                trav(i,j,vis,row,col,grid);
                }
            }
        }
        return island;
    }
};