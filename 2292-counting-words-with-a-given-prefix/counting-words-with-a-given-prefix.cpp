class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0;
        for(auto it:words){
            if(it.substr(0,pref.length())==pref)
            cnt++;
        }
        return cnt;
    }
};