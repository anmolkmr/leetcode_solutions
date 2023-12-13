class Solution {
public:
    bool check(int i,int j,vector<vector<int>> &matrix)
    {
        bool flag=true;
        int count=0;
        int row=matrix.size(),col=matrix[0].size();
        for(int l=0;l<row;l++)
        {
            if(matrix[l][j]==1)
            {
                count++;
                if(count>2)
                return false;
            }
        }

        for(int l=0;l<col;l++)
        {
            if(matrix[i][l]==1)
            {
                count++;
                if(count>2)
                return false;
            }
        }
        return flag;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int row=mat.size(),col=mat[0].size(),count=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(mat[i][j]==1&&check(i,j,mat))
                {
                    count++;
                }
            }
        }
        return count;
    }
};