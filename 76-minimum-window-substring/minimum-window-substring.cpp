class Solution {
public:
    // string getString(int i,int j,string s){
    //     string temp="";
    //     for(int k=i;k<=j;k++){
    //         temp+=s[k];
    //     }
    //     return temp;
    // }
    string minWindow(string s, string t) {
        if(t.size()>s.size())return "";
        int start=0;
        map<char,int> mp;
        for(auto it:t)
        mp[it]++;
        string ans="";
        int i=0,j=0,cnt=mp.size(),mi=INT_MAX;
        while(j<s.length()){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    cnt--;
                }
            }
            if(cnt==0){
                if(j-i+1<mi)
                {
                    // cout<<getString(i,j,s)<<endl;
                    mi=j-i+1;
                     start=i;
                    // ans=getString(i,j,s);
                }
                while(i<= j&&cnt==0){
                    if(mp.find(s[i])!=mp.end()){
                        mp[s[i]]++;
                        if(mp[s[i]]<=0){
                            i++;
                            //cout<<getString(i,j,s);
                            if(j-i+1<mi)
                            {
                                mi=j-i+1;
                                start=i;
                                // ans=getString(i,j,s);
                            }
                        }
                        else{
                            cnt++;
                            i++;
                        }
                    }
                    else{
                        
                    i++; 
                    if(j-i+1<mi)
                            {
                                mi=j-i+1;
                                 start=i;
                                // ans=getString(i,j,s);
                            }
                    }   
                }
            }
            j++;
        }
        if(mi==INT_MAX)return "";
        return ans=s.substr(start,mi);
        
    }
};