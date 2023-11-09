class Solution {
public:
    int ll=1e9+7;
    int countHomogenous(string s) {
        long long i=0,j=0,ans=0;
        while(j<s.length())
        {
            if(s[i]==s[j])
            {
                j++;
            }
            if(s[i]!=s[j])
            {
                long long len=j-i;
                ans+=(len*(len+1))/2;
                i=j;
            }
        }
        return ans%ll;
    }
};