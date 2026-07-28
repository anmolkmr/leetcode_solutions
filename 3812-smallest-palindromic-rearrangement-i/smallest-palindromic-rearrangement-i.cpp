class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> mp(26,0);
        for(auto it:s){
            mp[it-'a']++;
        }
        char uniq;
        if(s.length()%2){
            for(int i=0;i<26;i++){
                if(mp[i]%2){
                    uniq='a'+i;
                    mp[i]--;
                }
            }
        }

        vector<char> ans(s.length());

        int first=0,last=s.length()-1;
        for(int i=0;i<26;i++){
            for(int j=0;j<mp[i];j+=2){
                
                char temp=char(97+i);
                ans[first]=temp;
                ans[last]=temp;
                first++;
                last--;
            }
        }
        if(s.length()%2){
            ans[s.length()/2]=uniq;
        }

        string ans2="";
        for(auto it:ans){
            ans2+=it;
        }

        return ans2;


    }
};