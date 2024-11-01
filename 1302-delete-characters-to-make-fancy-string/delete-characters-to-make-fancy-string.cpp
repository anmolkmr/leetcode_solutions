class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){
            int c=1;
            while(s[i]==s[i+1]){
                c++;
                i++;
            }
            if(c>=2){
                ans+=s[i];
            }
            ans+=s[i];
        }
        return ans;
    }
};