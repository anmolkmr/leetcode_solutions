class Solution {
public:
    void trav(int i,int j,vector<vector<char>> &board,vector<vector<int>> &vis){
        queue<pair<int,int>> q;
        q.push({i,j});
        vis[i][j]=1;
        board[i][j]='P';
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            vector<int> ddx={1,0,0,-1};
            vector<int> ddy={0,1,-1,0};
            q.pop();
            for(int t=0;t<4;t++){
                int dx=r+ddx[t];
                int dy=c+ddy[t];
                if(dx>=0&&dy>=0&&dx<board.size()&&dy<board[0].size()&&vis[dx][dy]!=1&&board[dx][dy]!='X'){
                    q.push({dx,dy});
                    vis[dx][dy]=1;
                    board[dx][dy]='P';
                }
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int row=board.size(),col=board[0].size();
        vector<vector<int>> vis(row,vector<int>(col,0));
        for(int i=0;i<row;i++){
            if(board[i][0]=='O'){
                trav(i,0,board,vis);
            }
            if(board[i][col-1]=='O'){
                trav(i,col-1,board,vis);
            }
        }
        for(int i=0;i<col;i++){
            if(board[0][i]=='O'){
                trav(0,i,board,vis);
            }
            if(board[row-1][i]=='O'){
                trav(row-1,i,board,vis);
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(board[i][j]=='O')
                board[i][j]='X';
                if(board[i][j]=='P')
                board[i][j]='O';
                // if(vis[i][j]==1)
                // board[i][j]='O';
            }
        }
    }
};