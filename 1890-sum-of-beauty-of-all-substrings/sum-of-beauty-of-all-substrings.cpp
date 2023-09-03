class Solution {
public:
    int beautySum(string s) {
        int n=s.length(),sum=0;
        for(int i=0;i<n;i++)
        {
            map<char,int> mp;
            for(int j=i;j<n;j++)
            {
                mp[s[j]]++;
                int mi=INT_MAX,mx=0;
                for(auto it:mp)
                {
                    mi=min(mi,it.second);
                    mx=max(mx,it.second);
                }
                sum+=(mx-mi);
            }
        }
        return sum;
    }
};