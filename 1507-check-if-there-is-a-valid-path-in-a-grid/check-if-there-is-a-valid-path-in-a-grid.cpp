class Solution {
public:
    bool solve(int i,int j,vector<vector<int>> &grid,int r,int c,vector<vector<int>> &vis){
        
        if(i==r && j==c){
            return true;
        }

        vis[i][j] = 1;

        // type 1 → left, right
        if(grid[i][j]==1){
            int x=i, y=j+1;
            if(y<=c && (grid[x][y]==1||grid[x][y]==3||grid[x][y]==5) && vis[x][y]==0){
                if(solve(x,y,grid,r,c,vis)) return true;
            }
            y=j-1;
            if(y>=0 && (grid[x][y]==1||grid[x][y]==4||grid[x][y]==6) && vis[x][y]==0){
                if(solve(x,y,grid,r,c,vis)) return true;
            }
        }

        // type 2 → up, down
        else if(grid[i][j]==2){
            int x=i+1, y=j;
            if(x<=r && (grid[x][y]==2||grid[x][y]==5||grid[x][y]==6) && vis[x][y]==0){
                if(solve(x,y,grid,r,c,vis)) return true;
            }
            x=i-1;
            if(x>=0 && (grid[x][y]==2||grid[x][y]==3||grid[x][y]==4) && vis[x][y]==0){
                if(solve(x,y,grid,r,c,vis)) return true;
            }
        }

        // type 3 → left, down
        else if(grid[i][j]==3){
            int x=i, y=j-1;
            if(y>=0 && (grid[x][y]==1||grid[x][y]==4||grid[x][y]==6) && vis[x][y]==0){
                if(solve(x,y,grid,r,c,vis)) return true;
            }
            x=i+1; y=j;
            if(x<=r && (grid[x][y]==2||grid[x][y]==5||grid[x][y]==6) && vis[x][y]==0){
                if(solve(x,y,grid,r,c,vis)) return true;
            }
        }

        // type 4 → right, down
        else if(grid[i][j]==4){
            int x=i, y=j+1;
            if(y<=c && (grid[x][y]==1||grid[x][y]==3||grid[x][y]==5) && vis[x][y]==0){
                if(solve(x,y,grid,r,c,vis)) return true;
            }
            x=i+1; y=j;
            if(x<=r && (grid[x][y]==2||grid[x][y]==5||grid[x][y]==6) && vis[x][y]==0){
                if(solve(x,y,grid,r,c,vis)) return true;
            }
        }

        // type 5 → left, up
        else if(grid[i][j]==5){
            int x=i, y=j-1;
            if(y>=0 && (grid[x][y]==1||grid[x][y]==4||grid[x][y]==6) && vis[x][y]==0){
                if(solve(x,y,grid,r,c,vis)) return true;
            }
            x=i-1; y=j;
            if(x>=0 && (grid[x][y]==2||grid[x][y]==3||grid[x][y]==4) && vis[x][y]==0){
                if(solve(x,y,grid,r,c,vis)) return true;
            }
        }

        // type 6 → right, up
        else if(grid[i][j]==6){
            int x=i, y=j+1;
            if(y<=c && (grid[x][y]==1||grid[x][y]==3||grid[x][y]==5) && vis[x][y]==0){
                if(solve(x,y,grid,r,c,vis)) return true;
            }
            x=i-1; y=j;
            if(x>=0 && (grid[x][y]==2||grid[x][y]==3||grid[x][y]==4) && vis[x][y]==0){
                if(solve(x,y,grid,r,c,vis)) return true;
            }
        }

        return false; // ✅ IMPORTANT
    }

    bool hasValidPath(vector<vector<int>>& grid) {
        int row=grid.size(), col=grid[0].size();
        vector<vector<int>> vis(row,vector<int>(col,0));
        return solve(0,0,grid,row-1,col-1,vis);
    }
};