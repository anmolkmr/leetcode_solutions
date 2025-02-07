class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        map<int,int> mp,col;
        vector<int> ans;
        for(auto it:queries){
            if(mp[it[0]]>0){
                col[mp[it[0]]]--;
                if(col[mp[it[0]]]==0){
                    col.erase(mp[it[0]]);
                }
            }
            mp[it[0]]=it[1];
            col[it[1]]++;
            ans.push_back(col.size());
        }
        return ans;
    }
};