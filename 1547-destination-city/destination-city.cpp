class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,string> mp;
        for(auto it:paths)
        {
            mp[it[0]]=it[1];
        }
        for(auto it:mp)
        cout<<it.first<<" "<<it.second<<endl;
        string temp=paths[0][0];
        while(mp[temp]!="")
        {
            temp=mp[temp];
        }
        return temp;
    }
};