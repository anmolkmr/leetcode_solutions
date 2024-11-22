class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        map<string,int> mp;
        for(auto it:matrix){
            string temp="";
            for(int i=0;i<it.size();i++){
                temp+=(it[0]==it[i])?"T":"F";
            }
            mp[temp]++;
        }
        int ans=1;
        for(auto it:mp){
            ans=max(ans,it.second);
        }
        return ans;
    }
};