class Solution {
public:
    bool solve(int i,int j,string &s,string &p,vector<vector<int>> &dp)
    {
        if(i<0&&j<0)return true;
        if(i>=0&&j<0)return false;
        
        if(i<0&&j>=0)
        {
            for(int l=0;l<=j;l++)
            {
                if(p[l]!='*')
                return false;
            }
            return true;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        if(s[i]==p[j]||p[j]=='?')
        {
            return dp[i][j]=solve(i-1,j-1,s,p,dp);
        }
        else if(p[j]=='*'){
        return dp[i][j]=solve(i-1,j,s,p,dp)|solve(i,j-1,s,p,dp);
        }
        return dp[i][j]=false;
    }
    bool isMatch(string s, string p) {
        int i=s.length(),j=p.length();
        vector<vector<int>> dp(i+1,vector<int>(j+1,-1));
        return solve(i-1,j-1,s,p,dp); 
    }
};