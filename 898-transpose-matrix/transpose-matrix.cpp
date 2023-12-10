class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row=matrix.size(),col=matrix[0].size();
        vector<vector<int>> res;
        for(int i=0;i<col;i++)
        {
            vector<int> temp;
            for(int j=0;j<row;j++)
            {
                temp.push_back(matrix[j][i]);
            }
            res.push_back(temp);
        }
        return res;
    }
};