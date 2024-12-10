class Solution {
public:
    int maximumLength(string s) {
        map<string,int> mp;
        vector<string> ans;
        for(int i=0;i<s.length();i++){
            string temp="";
            int j=i;
            while(s[i]==s[j]){
                temp+=s[i];
                ans.push_back(temp);
                j++;
            }
        }
        for(auto it:ans)
        mp[it]++;
        int mx=-1;
        for(auto it:mp){
            if(it.second>2)
            {
                string str=it.first;
                int k=str.length();
                mx=max(mx,k);
            }
        }
        return mx;
    }
};