class Solution {
public:
    bool check(string s,map<char,bool> mp){
        for(int i=0;i<s.length();i++){
            if(mp[s[i]]==false)
            return false;
        }
        return true;
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,bool> mp;
        for(auto it:allowed){
            mp[it]=true;
        }

        int cnt=0;
        for(auto it:words){
            
            if(check(it,mp))
            cnt++;
        }
        return cnt;
    }
};