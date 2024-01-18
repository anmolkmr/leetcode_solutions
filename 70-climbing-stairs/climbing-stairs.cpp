class Solution {
public:
    int climbStairs(int n) {
        vector<int> temp(n+2);
        temp[0]=0;
        temp[1]=1;
        temp[2]=2;
        for(int j=3;j<n+1;j++)
        {
            temp[j]=temp[j-1]+temp[j-2];
        }
        return temp[n];

    }
};