class Solution {
public:
    string toBinary(int num){
        int t=num;
        string bin="";
        while(num){
            bin+=to_string(num%2);
            num=num/2;
        }
        reverse(bin.begin(),bin.end());
        return bin;
    }
    int toDecimal(string n){
        int ind=0;
        int ans=0;
        for(int i=n.length()-1;i>=0;i--){
            if(n[i]=='1')
            {
                ans+=pow(2,ind);
            }
            ind++;
        }
        return ans;
    }
    int findComplement(int num) {
        string bin=toBinary(num);
        for(int i=0;i<bin.length();i++){
            bin[i]=bin[i]=='0'?'1':'0';
        }
        return toDecimal(bin);
        
    }
};