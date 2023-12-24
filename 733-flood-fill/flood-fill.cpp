class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int row=image.size(),col=image[0].size();
        vector<vector<int>> vis(row,vector<int>(col));
        int prevcolor=image[sr][sc];
        queue<pair<int,int>> q;
        image[sr][sc]=color;
        q.push({sr,sc});
        vis[sr][sc]=1;
        while(!q.empty())
        {
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            if(i+1>=0&&j>=0&&i+1<row&&j<col&&!vis[i+1][j]&&image[i+1][j]==prevcolor)
            {
                vis[i+1][j]=1;
                q.push({i+1,j});
                image[i+1][j]=color;
            }
            if(i-1>=0&&j>=0&&i-1<row&&j<col&&!vis[i-1][j]&&image[i-1][j]==prevcolor)
            {
                vis[i-1][j]=1;
                q.push({i-1,j});
                image[i-1][j]=color;
            }
            if(i>=0&&j+1>=0&&i<row&&j+1<col&&!vis[i][j+1]&&image[i][j+1]==prevcolor)
            {
                vis[i][j+1]=1;
                q.push({i,j+1});
                image[i][j+1]=color;
            }
            if(i>=0&&j-1>=0&&i<row&&j-1<col&&!vis[i][j-1]&&image[i][j-1]==prevcolor)
            {
                vis[i][j-1]=1;
                q.push({i,j-1});
                image[i][j-1]=color;
            }
        }
        return image;
    }
};