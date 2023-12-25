class Solution {
public:
    int solve(int ind,string s,vector<int> &dp)
    {
        if(ind>=s.length())
        {
            return 1;
        }
        if(dp[ind]!=-1)return dp[ind];
        int onetake=0,twotake=0;
        // if(ind<s.length()-1&&s[ind+1]=='0')
        // {
        //     onetake=solve(ind+2,s,dp);
        // }
        // else
        // {
            if(s[ind]!='0')
            onetake=solve(ind+1,s,dp);
        //}
        string ap="";
        if(ind<s.length()-1&&s[ind]!='0')
        {ap+=s[ind];
        ap+=s[ind+1];
        if(0<stoi(ap)&&stoi(ap)<27)
        {
            twotake=solve(ind+2,s,dp);
        }
        }
        return dp[ind]=onetake+twotake;
    }
    int numDecodings(string s) {
        int ind=0;
        if(s[0]=='0')return 0;
        vector<int> dp(s.length()+1,-1);
        return solve(ind,s,dp);
    }
};