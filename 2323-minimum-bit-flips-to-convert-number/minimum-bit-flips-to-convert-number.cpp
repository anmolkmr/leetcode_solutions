class Solution {
public:
    string toBin(int n){
        string s="";
        while(n){
            if(n%2==0){
                s+='0';
                n=n/2;
            }
            else{
                s+='1';
                n=n/2;
            }
        }
        reverse(s.begin(),s.end());
        return s;
    }
    int minBitFlips(int start, int goal) {
        string s1=toBin(start),s2=toBin(goal);
        int cnt=0;
        if(s1.length()>=s2.length()){
            int diff=s1.length()-s2.length();
            string temp="";
            while(diff--){
                temp+="0";
            }
            s2=temp+s2;
        }
        else{
            int diff=s2.length()-s1.length();
            string temp="";
            while(diff--){
                temp+="0";
            }
            s1=temp+s1;
        }

        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                cnt++;
            }
        }
        return cnt;
        
    }
};