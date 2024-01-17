class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp1,mp2;
        for(auto it:arr)
        mp1[it]++;
        for(auto it:mp1)
        {
            mp2[it.second]++;
        }
        if(mp2.size()==mp1.size())
        return true;
        return false;

    }
};