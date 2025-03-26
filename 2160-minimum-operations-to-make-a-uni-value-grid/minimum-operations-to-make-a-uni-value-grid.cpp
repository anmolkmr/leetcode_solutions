class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int eq=grid[0][0]%x;
        vector<int> vs;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                vs.push_back(grid[i][j]);
                if(grid[i][j]%x!=eq)
                return -1;
            }
        }
        sort(vs.begin(),vs.end());
        int mid=vs.size()/2;
        int cnt=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                int l=abs(grid[i][j]-vs[mid]);
                cnt+=l/x;
            }
        }
        return cnt;

    }
};