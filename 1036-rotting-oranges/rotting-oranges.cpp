class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int row=grid.size(),col=grid[0].size();
        vector<vector<int>> vis(row,vector<int>(col));
        queue<pair<pair<int,int>,int>> q;
        int org=0,emp=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
                else if(grid[i][j]==1)
                org++;
                else
                emp++;
            }
        }
        if(q.empty()&&emp&&org==0)return 0;
        int dirx[]={-1,1,0,0};
        int diry[]={0,0,-1,1};
        int time=-1;
        int t=0;
        while(!q.empty())
        {
            int i=q.front().first.first;
            int j=q.front().first.second;
            time=max(time,q.front().second);
            //cout<<i<<" "<<j<<" "<<time<<endl;
            t=time+1;
            q.pop();
            for(int k=0;k<4;k++)
            {
                int newi=i+dirx[k];
                int newj=j+diry[k];
                if(newi>=0&&newi<row&&newj>=0&&newj<col&&!vis[newi][newj]&&grid[newi][newj]==1)
                {
                    vis[newi][newj]=1;
                    grid[newi][newj]=2;
                    q.push({{newi,newj},t});
                }
            }

        }

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]==1)
                return -1;
            }
        }
        return time;
    }
};