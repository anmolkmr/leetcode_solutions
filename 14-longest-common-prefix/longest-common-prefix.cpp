class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size()-1,i=0;
        string ans="";
        while(i<strs[0].length()&&i<strs[n].length())
        {
            if(strs[0][i]==strs[n][i])
            ans+=strs[0][i];
            else
            break;
            i++;
        }
        return ans;
    }
};