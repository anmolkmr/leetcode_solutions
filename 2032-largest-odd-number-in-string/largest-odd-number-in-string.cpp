class Solution {
public:
    string largestOddNumber(string num) {
        int flag=false;
        string ans="";
        for(int i=num.length()-1;i>=0;i--)
        {
            if((num[i]-'0')%2)
            {
                flag=true;
            }
            if(flag)
            {
                ans+=num[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};