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

        // cout<<uniq<<endl;

        vector<char> ans(s.length(),'a');

        int first=0,last=s.length()-1;

        // for(auto it:mp){
        //     cout<<it;
        // }

        // cout<<"as";
        string s1="",s2="";


        for(int i=0;i<26;i++){
            for(int j=0;j<mp[i];j+=2){
                
                char temp=char(97+i);
                ans[first]=temp;
                ans[last]=temp;
                s1+=temp;
                first++;
                last--;
            }
        }
        if(s.length()%2){
            ans[s.length()/2]=uniq;
        }

        // for(auto it:ans)
        // cout<<it;

        string ans2="";
        for(auto it:ans){
            ans2+=it;
        }

        return ans2;


    }
};