class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row=grid.size(),col=grid[0].size();
        while(k--){
        vector<int> last;
        last.push_back(grid[row-1][col-1]);
        for(int i=0;i<row-1;i++){
            last.push_back(grid[i][col-1]);
        }

        for(int c=col-2;c>=0;c--){
            for(int r=0;r<row;r++){
                grid[r][c+1]=grid[r][c];
            }
        }
        int ind=0;
        for(int i=0;i<row;i++){
            grid[i][0]=last[ind];
            ind++;;
        }}
        return grid;
    }
};