class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int row=matrix.size(),col=matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                int mi=INT_MAX;
                if(matrix[i][j]==1){
                    
                    if(i>0){
                        mi=min(matrix[i-1][j],mi);
                    }
                    if(j>0){
                        mi=min(matrix[i][j-1],mi);
                    }
                    if(i>0&&j>0){
                        mi=min(matrix[i-1][j-1],mi);
                    }else{mi=0;}
                    matrix[i][j]=mi+1;
                }
                
            }


           


        }
int ans=0;
            for(auto it:matrix){
                for(auto it1:it){
                    ans+=it1;
                }
                cout<<endl;
            }
         return ans;
    }
};