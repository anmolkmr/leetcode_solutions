class Solution {
public:
    int maxScore(string s) {
        map<char,int> mp;
        for(auto it:s)
        mp[it]++;
        int zero=0,one=0;
        if(mp['1']==0)
        return mp['0']-1;
        else if(mp['0']==0)
        return mp['1']-1;
        int mx=INT_MIN;
        for(int i=0;i<s.length();i++)
        {

            if(s[i]=='0')
            zero++;
            else if(s[i]=='1')
            one++;      
            if(i>=0&&i<s.length()-1)
            mx=max(mx,zero+mp['1']-one);
        }
        return mx;
    }
};