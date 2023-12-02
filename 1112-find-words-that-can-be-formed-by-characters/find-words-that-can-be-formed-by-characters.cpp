class Solution {
public:
    map<char,int> mp;
    bool ischk(string s,map<char,int> temp)
    {
        for(auto it:s)
            {
                if(mp[it]<temp[it])
                return false;
            }
            return true;
    }

    int countCharacters(vector<string>& words, string chars) {
        
        for(auto it:chars)
        mp[it]++;
        int ans=0;
        for(auto it:words)
        {
            map<char,int> temp;
            for(auto it1:it)
            temp[it1]++;
            if(ischk(it,temp))
            {
                ans+=it.length();
            }
        }
        return ans;
    }
};