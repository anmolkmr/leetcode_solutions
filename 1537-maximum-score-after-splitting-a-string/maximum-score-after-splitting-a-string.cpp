class Solution {
public:
    int maxScore(string s) {
        int ans=INT_MIN,z=0,o=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0')
            z++;
            else
            o++;
        }
        int zero=0;
        for(int j=0;j<s.length()-1;j++){
            if(s[j]=='0')
            {
                zero++;
            }else {
                o--;
            }

            ans=max(ans,zero+o);
        }
        return ans;
    }
};