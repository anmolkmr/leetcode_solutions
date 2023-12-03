class Solution {
public:
    map<char,int> mp;
    bool ischk(map<char,int> mp1)
    {
        for(auto it:mp1)
        {
            if(mp1[it.first]>mp[it.first])
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
            map<char,int> mp1;
            for(auto it1:it)
            mp1[it1]++;
            if(ischk(mp1)==true)
            {
                ans+=it.size();
            }
        }
        return ans;

    }
};