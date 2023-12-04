#include<bits/stdc++.h>
class Solution {
public:
    
    int solve(int n,vector<int> &dp)
    {
        int t1=0,t2=0;
        if(n==1)return 0;
        if(dp[n]!=-1)return dp[n];
        if(n%2==0)
        {
            t1=1+solve(n/2,dp);
        }
        else
        {
            t2=1+solve(3*n+1,dp);
        }
        return dp[n]=t1+t2;
    }
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>> ans;
        vector<int> dp(300000,-1);
        for(int i=lo;i<=hi;i++)
        {
            ans.push_back({solve(i,dp),i});
        }
        sort(ans.begin(),ans.end());
        return ans[k-1].second;
    }
};