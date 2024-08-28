class Solution {
public:
    bool solve(int i,int j,vector<vector<int>> &grid1,vector<vector<int>> &grid2,vector<vector<int>> &vis,int &cnt){

        bool result=grid1[i][j]==1;
        vis[i][j]=1;
        vector<int> dx={0,1,-1,0};
        vector<int> dy={1,0,0,-1};
        for(int k=0;k<4;k++){
            int newx=i+dx[k];
            int newy=j+dy[k];
            if(newx>=0&&newy>=0&&newx<grid1.size()&&newy<grid1[0].size()&&!vis[newx][newy]&&grid2[newx][newy]){
             result= solve(newx,newy,grid1,grid2,vis,cnt) && result;
            }
        }
        return result;
        
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int row=grid2.size(),col=grid2[0].size();
        vector<vector<int>> vis(row,vector<int>(col,0));
        int count=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid2[i][j]==1&&!vis[i][j]&& solve(i,j,grid1,grid2,vis,count)){
                    count++;
                    // cout<<i<<" "<<j<<endl;
                   
                }
            }
        }
        return count;
        
    }
};