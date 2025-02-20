class Solution {
public:
    void solve(int ind,int n,string &ds,vector<string> &ans ){
        if(ind>=n){
            ans.push_back(ds);
            return ;
        }
        ds+="0";
        solve(ind+1,n,ds,ans);
        ds.pop_back();
        ds+="1";
        solve(ind+1,n,ds,ans);
        ds.pop_back();
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums[0].length();
        vector<string> ans;
        string ds="";
        solve(0,n,ds,ans);
        map<string,int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto it:ans)
        {
            if(mp.find(it)==mp.end())
            return it;
        }
        return ds;
    }
};