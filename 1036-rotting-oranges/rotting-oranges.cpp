class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int row=grid.size(),col=grid[0].size();
        queue<pair<pair<int,int>,int>> q;
        vector<vector<int>> vis(row,vector<int>(col,0));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }
        int time=0;
        vector<int> dx={0,1,-1,0};
            vector<int> dy={1,0,0,-1};
        while(!q.empty()){
            pair<int,int> p=q.front().first;
             time=q.front().second;
            q.pop();
            
            

            for(int i=0;i<4;i++){
                int newx=dx[i]+p.first;
                int newy=dy[i]+p.second;
                if(newx>=0&&newx<row&&newy>=0&&newy<col&&!vis[newx][newy]&&grid[newx][newy]==1){
                    q.push({{newx,newy},time+1});
                    vis[newx][newy]=1;
                }
            } 
        }

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1&&vis[i][j]!=1)
                return -1;
            }
        }
        return time;
    }
};