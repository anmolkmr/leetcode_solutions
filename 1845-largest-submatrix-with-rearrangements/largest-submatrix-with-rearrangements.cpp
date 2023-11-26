class Solution {
public:
    int check(vector<int> &nums)
    {
        sort(nums.begin(),nums.end());
        int s=nums.size();
        int mx=0;
        for(int i=0;i<s;i++)
        {
            int temp=nums[i]*(s-i);
            mx=max(mx,temp);
        }
        return mx;
    }
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int r=matrix.size(),c=matrix[0].size();
        int mx=INT_MIN;
        vector<int> temp=matrix[0];
        for(int i=1;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]>0)
                {
                    matrix[i][j]=matrix[i][j]+matrix[i-1][j];
                }
                else
                {
                    matrix[i][j]=0;
                }
            }
        }
        for(auto it:matrix)
        {
            mx=max(mx,check(it));
        }
        return mx;
    }
};