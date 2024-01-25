class Solution {
public:
    int solve(int ind1,int ind2,string &t1,string &t2,vector<vector<int>> &dp)
    {
        if(ind1<0||ind2<0)return 0;
        if(dp[ind1][ind2]!=-1)return dp[ind1][ind2];
        if(t1[ind1]==t2[ind2])
        {
            return 1+solve(ind1-1,ind2-1,t1,t2,dp);
        }
        return dp[ind1][ind2]=max(solve(ind1-1,ind2,t1,t2,dp),solve(ind1,ind2-1,t1,t2,dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(text1.length()+1,vector<int> (text2.length()+1,-1));
        int ind1=text1.length()-1,ind2=text2.length()-1;
        return solve(ind1,ind2,text1,text2,dp);
    }
};