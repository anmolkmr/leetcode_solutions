class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int row=grid.size(),col=grid[0].size();
        vector<vector<int>> ans;
        vector<int> rowo,colo;
        for(int i=0;i<row;i++)
        {
            int sum=0;
            for(int j=0;j<col;j++)
            {
                sum+=grid[i][j];
            }
            int zero=row-sum;
            rowo.push_back(sum-zero);
        } 
        for(int i=0;i<col;i++)
        {
            int sum=0;
            for(int j=0;j<row;j++)
            {
                sum+=grid[j][i];
            }
            int zero=col-sum;
            colo.push_back(sum-zero);
        } 

        for(int i=0;i<rowo.size();i++)
        {
            vector<int> temp;
            for(int j=0;j<colo.size();j++)
            {
                temp.push_back(rowo[i]+colo[j]);
            }
            ans.push_back(temp);
        }
        return ans;
        
        
    }
};