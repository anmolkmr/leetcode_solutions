class Solution {
public:
    int maxOperations(string s) {
        string temp="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                temp+=s[i];
            }
            else{
                temp+=s[i];
                while(s[i]=='0'){
                    i++;
                }
                i--;
            }
        }
        cout<<temp;
        int cnt=0,ans=0;

        for(int i=temp.length()-1;i>=0;i--){
            if(temp[i]=='0'){
                cnt++;
            }else{
                ans+=cnt;
            }
        }
        return ans;
        
    }
};