class Solution {
public:
    void bfs(int i,int j,vector<vector<int>>& vis,vector<vector<int>> &grid){
        queue<pair<int,int>> q;
        q.push({i,j});
        vis[i][j]=1;
        int n=grid.size();
        int m=grid[0].size();
        while(!q.empty()){
            int trow=q.front().first;
            int tcol=q.front().second;
            q.pop();
            if(trow+1>=0&&trow+1<n&&tcol>=0&&tcol<m&&grid[trow+1][tcol]==1&&!vis[trow+1][tcol])
            {
                vis[trow+1][tcol]=1;
                q.push({trow+1,tcol});
            }
            if(trow-1>=0&&trow-1<n&&tcol>=0&&tcol<m&&grid[trow-1][tcol]==1&&!vis[trow-1][tcol])
            {
                vis[trow-1][tcol]=1;
                q.push({trow-1,tcol});
            }
            if(trow>=0&&trow<n&&tcol+1>=0&&tcol+1<m&&grid[trow][tcol+1]==1&&!vis[trow][tcol+1])
            {
                vis[trow][tcol+1]=1;
                q.push({trow,tcol+1});
            }
            if(trow>=0&&trow<n&&tcol-1>=0&&tcol-1<m&&grid[trow][tcol-1]==1&&!vis[trow][tcol-1])
            {
                vis[trow][tcol-1]=1;
                q.push({trow,tcol-1});
            }
        }
    }
    int solve(vector<vector<int>> grid){
        vector<vector<int>> vis(grid.size(),vector<int>(grid[0].size()));
        int cnt=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1&&vis[i][j]!=1){
                    bfs(i,j,vis,grid);
                    cnt++;
                }
            }
        }
        return cnt;
    }
    int minDays(vector<vector<int>>& grid) {
        int land=0;
        if(solve(grid)>1)return 0;
        else if(solve(grid)==1){
            for(int i=0;i<grid.size();i++){
                for(int j=0;j<grid[0].size();j++){
                    if(grid[i][j]==1){
                        land++;
                        grid[i][j]=0;
                        if(solve(grid)>1)
                        return 1;
                        grid[i][j]=1;
                    }
                }
            }
            
        }
        if(land==0)return 0;
            if(land==1)return 1;
        return 2;
        
    }
};