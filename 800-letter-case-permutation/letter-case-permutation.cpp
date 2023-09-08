class Solution {
public:
    void solve(int ind,string &s,string &ds,vector<string> &ans)
    {
        if(ind>=s.length())
        {
            ans.push_back(ds);
            return ;
        }
        if(isdigit(s[ind]))
        {
            ds+=s[ind];
            solve(ind+1,s,ds,ans);
            ds.pop_back();
        }
        else{
        ds+=toupper(s[ind]);
        solve(ind+1,s,ds,ans);
        ds.pop_back();
        ds+=tolower(s[ind]);
        solve(ind+1,s,ds,ans);
        ds.pop_back();
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        string ds;
        solve(0,s,ds,ans);
        return ans;
    }
};