class Solution {
public:
    string reverse(string &temp)
    {
        int i=0,j=temp.length()-1;
        while(i<j)
        {
            swap(temp[i],temp[j]);
            i++;
            j--;
        }
        return temp;
    }
    string shortestCommonSupersequence(string str1, string str2) {
        int s1=str1.length(),s2=str2.length();
        vector<vector<int>> dp(s1+1,vector<int>(s2+1));
        for(int i=1;i<=s1;i++)
        {
            for(int j=1;j<=s2;j++)
            {
                if(str1[i-1]==str2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        cout<<dp[s1][s2];
        int i=s1,j=s2;
        string ans="";
        while(i>0&&j>0)
        {
            if(str1[i-1]==str2[j-1])
            {
                ans+=str1[i-1];
                i--;
                j--;
            }
            else if(dp[i-1][j]>dp[i][j-1])
            {
                ans+=str1[i-1];
                i--;
            }
            else{
                ans+=str2[j-1];
                j--;
            }
        }
        while(i>0)
        {
            ans+=str1[i-1];
            i--;
        }
        while(j>0)
        {
            ans+=str2[j-1];
            j--;
        }
        string temp=reverse(ans);
        return temp;
    }
};