class Solution {
public:
    string solve(int i,string t){
        string temp="";
        for(int l=i;l<t.length();l++){
            temp+=t[l];
        }

        for(int l=0;l<i;l++){
            temp+=t[l];
        }
        return temp;
    }
    bool rotateString(string s, string goal) {
        for(int i=0;i<s.length();i++){
            if(goal[0]==s[i]){
                string temp=solve(i,s);
                if(goal==temp)
                return true;
            }
        }
        return false;
    }
};