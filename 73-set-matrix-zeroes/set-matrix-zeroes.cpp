class Solution {
public:
void setminus(vector<vector<int>>& matrix,int i,int j)
{
    for(int l=0;l<matrix.size();l++)
    {
        if(matrix[l][j]!=0)
        matrix[l][j]=INT_MAX-5;
    }
    for(int l=0;l<matrix[0].size();l++)
    {
        if(matrix[i][l]!=0)
        matrix[i][l]=INT_MAX-5;
    }
}
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size(),i,j;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    setminus(matrix,i,j);
                }
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(matrix[i][j]==INT_MAX-5)
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
};