class Solution {
public:
    // int solve(int ind,string s,map<char,int> &mp,vector<int> &dp)
    // {
    //     if(ind==0)
    //     {return mp[s[ind]];
    //     }
    //     if(dp[ind]!=-1)return dp[ind];
        
    //     int ntake=0+solve(ind-1,s,mp,dp);   
    //     int take=0;
    //     if(mp[s[ind]]>0)
    //     take=mp[s[ind]]+solve(ind-1,s,mp,dp);
        
    //     return dp[ind]=max(take,ntake);
    // }
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        vector<int> dp(s.length()+1,-1);
        map<char,int> mp;
        for(char c='a';c<='z';c++)
        mp[c]=c-96;
        for(int i=0;i<chars.size();i++)
        mp[chars[i]]=vals[i];
        vector<int> temp;
        for(auto it:s)
        temp.push_back(mp[it]);
        for(auto it:temp)
        cout<<it;
        int sum=0,mx=0;
        for(int i=0;i<temp.size();i++)
        {
            sum+=temp[i];
            mx=max(mx,sum);
            if(sum<0)
            sum=0;
        }
        return mx;
        
        
    }
};