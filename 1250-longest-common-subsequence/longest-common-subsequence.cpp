class Solution {
public:
    int f(string &x,string &y,int i,int j,vector<vector<int>> &dp){
        if(i < 0 || j < 0)return 0;
        if(dp[i][j] != -1)return dp[i][j];
        if(x[i] == y[j])
            return dp[i][j] = 1 + f(x,y,i-1,j-1,dp);
        return dp[i][j] =  max(f(x,y,i-1,j,dp) , f(x,y,i,j-1,dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(text1.length()+1,vector<int>(text2.length()+1,-1));
       return f(text1,text2,text1.length()-1,text2.length(),dp); 
    }
};
