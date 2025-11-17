class Solution {
public:
    bool isWordExistInMap(string s,map<char,bool> mp){

        for(int i=0;i<s.length();i++){
            if(mp[tolower(s[i])]==false){
                return false;
            }
        }
        return true;

    }
    vector<string> findWords(vector<string>& words) {
        string s1="qwertyuiop";
        string s2="asdfghjkl";
        string s3="zxcvbnm";
        map<char,bool> m1,m2,m3;

        for(int i=0;i<s1.length();i++){
            m1[s1[i]]=true;
        }
        for(int i=0;i<s2.length();i++){
            m2[s2[i]]=true;
        }
        for(int i=0;i<s3.length();i++){
            m3[s3[i]]=true;
        }

        vector<string> ans;

        for(auto it:words){
            if(isWordExistInMap(it,m1)){
                ans.push_back(it);
            }else if(isWordExistInMap(it,m2)){
                ans.push_back(it);
            }else if(isWordExistInMap(it,m3)){
                ans.push_back(it);
            }
        }

        return ans;
  

        // for(int i=0;i<s1.length();i++){
        //     mp1[s1[i]]++;
        //     mp1[s1[i]]=mp1[s1[i]]+1;
        //     key=valuse

        // }

    }
};