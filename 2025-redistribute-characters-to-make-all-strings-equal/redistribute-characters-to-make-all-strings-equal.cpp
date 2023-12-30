class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int> mp;
        for(auto it:words)
        {
            for(auto it1:it)
            {
                mp[it1]++;
            }
        }
        int n=words.size();
        for(auto it:mp)
        {
            if(it.second%n)
            return false;
        }
        return true;
        
    }
};