class Solution {
public:
    string toBin(int n){
        string ans="";
        while(n){
            if(n%2){
                n=n/2;
                ans+="1";
            }else{
                n=n/2;
                ans+="0";
            }
        }
        return ans;
    }
    int reverseBits(int n) {
        string bin = toBin(n);
        int d=bin.length();
        long long ans=0;
        int ind=32-d;
        for(int i=d-1;i>=0;i--){
            if(bin[i]=='1'){
                ans+=pow(2,ind);
            }
            ind++;
        }
        return ans;
        
    }
};