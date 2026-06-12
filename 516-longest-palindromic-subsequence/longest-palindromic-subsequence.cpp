class Solution {
public:
    int solve(int i,int j,string &s1,string &s2,vector<vector<int>> &dp){
        if(i<0||j<0)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(s1[i]==s2[j]){
            return 1+solve(i-1,j-1,s1,s2,dp);
        }
        return dp[i][j]=max(solve(i-1,j,s1,s2,dp),solve(i,j-1,s1,s2,dp));
    }
    int longestPalindromeSubseq(string s) {
        string s1=s,s2=s;
        reverse(s2.begin(),s2.end());
        vector<vector<int>> dp(s.length(),vector<int>(s.length(),-1));
        return solve(s1.length()-1,s2.length()-1,s1,s2,dp);
    }
};