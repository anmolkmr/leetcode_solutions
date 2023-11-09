class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string s2="";
        for(int i=s.length()-1;i>=0;i--)
        s2+=s[i];
int len=s.length();
vector<vector<int>> dp(len+1,vector<int>(len+1,0));
for(int i=1;i<=len;i++)
{
for(int j=1;j<=len;j++)
{
if(s[i-1]==s2[j-1]){
dp[i][j]=1+dp[i-1][j-1];
}
else
{
dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
}
}

}
return dp[len][len];
    }
};