class Solution {
public:
    void marker(int i,int j,vector<vector<int>> &mat){
        for(int k=j+1; k<mat[0].size();k++){
            if(mat[i][k]==1||mat[i][k]==2){
                break;
            }
            mat[i][k]=-1;
        }
        for(int k=j-1; k>=0;k--){
            if(mat[i][k]==1||mat[i][k]==2){
                break;
            }
            mat[i][k]=-1;
        }

        for(int k=i+1; k<mat.size();k++){
            if(mat[k][j]==1||mat[k][j]==2){
                break;
            }
            mat[k][j]=-1;
        }
        for(int k=i-1; k>=0;k--){
            if(mat[k][j]==1||mat[k][j]==2){
                break;
            }
            mat[k][j]=-1;
        }
    }
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> mat(m,vector<int>(n,0));
        for(auto it:guards){
            mat[it[0]][it[1]]=1;
        }
        for(auto it:walls){
            mat[it[0]][it[1]]=2;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    marker(i,j,mat);
                }
            }
        }
        int cnt=0;
          for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};