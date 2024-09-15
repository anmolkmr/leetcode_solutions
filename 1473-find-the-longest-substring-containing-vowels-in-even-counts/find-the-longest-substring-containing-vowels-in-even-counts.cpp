class Solution {
public:
    int findTheLongestSubstring(string s) {
        map<string,int> mp;
        string currState="";
        int res=0;
        mp["00000"]=-1;
        vector<int> v(5,0);
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'){
                v[0]=v[0]^1;
            }else if(s[i]=='e'){
                v[1]=v[1]^1;
            }
            else if(s[i]=='i'){
                v[2]=v[2]^1;
            }
            else if(s[i]=='o'){
                v[3]=v[3]^1;
            }
            else if(s[i]=='u'){
                v[4]=v[4]^1;
            }

            currState="";
            for(int j=0;j<v.size();j++){
                currState+=to_string(v[j]);
            }

            if(mp.find(currState)!=mp.end()){
                res=max(res,i-mp[currState]);
            }
            else{
                mp[currState]=i;
            }
        }
        return res;
    }
};