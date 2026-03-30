class Solution {
public:
    bool checkStrings(string s1, string s2) {
        string s11="",s22="",s33="",s44="";
        for(int i=0;i<s1.length();i++){
            if(i%2==0){
                s11+=s1[i];
                s33+=s2[i];
            }else{
                s22+=s1[i];
                s44+=s2[i];
            }
        }
        sort(s11.begin(),s11.end());
        sort(s22.begin(),s22.end());
        sort(s33.begin(),s33.end());
        sort(s44.begin(),s44.end());

        if(s11==s33&&s22==s44)
        return true;
        return false;
    }
};