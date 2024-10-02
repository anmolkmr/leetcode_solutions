class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int> mp;
        for(auto it:arr){
            mp[it]++;
        }
        vector<int> rank,ans;
        int ind=1;
        for(auto it:mp)
        {
            mp[it.first]=ind;
            ind++;
        }
        for(auto it:arr){
            ans.push_back(mp[it]);
        }
        return ans;
    }
};