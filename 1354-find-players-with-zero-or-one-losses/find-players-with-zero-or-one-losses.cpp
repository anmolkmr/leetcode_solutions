class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       vector<int> ans0,ans1;
       map<int,int> mp;
       for(auto it:matches)
       {
           mp[it[1]]++;
       } 
       for(auto it:mp)
       {
           if(it.second==1)ans1.push_back(it.first);
       }
       for(auto it:matches)
       {
           if(mp[it[0]]==0)
           {
               mp[it[0]]++;
               ans0.push_back(it[0]);
           }
       }
       sort(ans0.begin(),ans0.end());
       sort(ans1.begin(),ans1.end());
       return {ans0,ans1};
    }
};