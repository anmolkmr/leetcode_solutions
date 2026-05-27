class Solution {
public:
    bool isValid(int c,int r,vector<string> b,int n){
        for(int i=c;i>=0;i--){
            if(b[r][i]=='Q')return false;
        }
        int i=r,j=c;
        while(i>=0&&j>=0&&i<n&&j<n){
            if(b[i][j]=='Q')return false;
            i--;
            j--;
        }
         i=r,j=c;
        while(i>=0&&j>=0&&i<n&&j<n){
            if(b[i][j]=='Q')return false;
            i++;
            j--;
        }
        return true;
    }
    void solve(int c,int n,vector<vector<string>> &ans,vector<string> &board){
        if(c==n){
            ans.push_back(board);
        }
        for(int i=0;i<n;i++){
            if(isValid(c,i,board,n)){
                board[i][c]='Q';
                solve(c+1,n,ans,board);
                board[i][c]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board;
        string s;
        
        for(int i=0;i<n;i++){
            s+=".";
        }
        for(int i=0;i<n;i++){
            board.push_back(s);
        }

        solve(0,n,ans,board);
        return ans;
    }
};