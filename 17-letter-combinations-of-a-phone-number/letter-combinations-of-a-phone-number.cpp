class Solution {
public:
    void solve(int ind,vector<string> &keys,string &temp,string &digits,vector<string> &ans)
    {
        if(ind>=digits.length())
        {
            ans.push_back(temp);
            return ;
        }
            int n=digits[ind]-'0'-2;
            for(int i=0;i<keys[n].length();i++)
            {
                temp+=keys[n][i];
                solve(ind+1,keys,temp,digits,ans);
                temp.pop_back();
            }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> keys={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> an;
        string temp="";
        if(digits.length()==0)return an;
        solve(0,keys,temp,digits,an);
        return an;
    }
};