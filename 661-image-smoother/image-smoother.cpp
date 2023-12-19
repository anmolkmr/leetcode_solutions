class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int row=img.size(),i,j;
        int col=img[0].size();
        vector<vector<int>> ans;
        for(i=0;i<row;i++)
        {
            int avg=0,cnt=0;
            vector<int> temp;
            for(j=0;j<col;j++)
            {
                //cout<<img[i][j];
                if(j-1>=0&&i-1>=0&&j-1<col&&i-1<row)
                {
                    avg+=img[i-1][j-1];
                    cnt++;
                }
                if((j-1)>=0&&i>=0&&(j-1)<col&&i<row)
                {
                    avg+=img[i][j-1];
                    cnt++;
                }
                if(j>=0&&i-1>=0&&j<col&&i-1<row)
                {
                    avg+=img[i-1][j];
                    cnt++;
                }
                if(j+1>=0&&i-1>=0&&j+1<col&&i-1<row)
                {
                    avg+=img[i-1][j+1];
                    cnt++;
                }
                if(j+1>=0&&i+1>=0&&j+1<col&&i+1<row)
                {
                    avg+=img[i+1][j+1];
                    cnt++;
                }
                if(j-1>=0&&i+1>=0&&j-1<col&&i+1<row)
                {
                    avg+=img[i+1][j-1];
                    cnt++;
                }
                if(j>=0&&i>=0&&j<col&&i<row)
                {
                    avg+=img[i][j];
                    cnt++;
                }
                if(j+1>=0&&i>=0&&j+1<col&&i<row)
                {
                    avg+=img[i][j+1];
                    cnt++;
                }
                if(j>=0&&i+1>=0&&j<col&&i+1<row)
                {
                    avg+=img[i+1][j];
                    cnt++;
                }
                temp.push_back(floor(avg/cnt));
                avg=0;
                cnt=0;
            }
            ans.push_back(temp);
        }
        return ans;

    }
};