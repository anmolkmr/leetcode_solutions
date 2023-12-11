class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int> mp;
        for(auto it:arr)
        mp[it]++;
        float temp= arr.size()/4;
        for(auto it:mp)
        {
            if(it.second>temp)
            return it.first;
        }
        return arr[0];
    }
};