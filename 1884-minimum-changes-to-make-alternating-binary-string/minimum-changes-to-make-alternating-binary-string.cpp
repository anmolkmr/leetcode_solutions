class Solution {
public:
    int minOperations(string s) {
        int zeroeven=0,oneodd=0,oneeven=0,zeroodd=0;
        if(s.length()==1)return 0;
        for(int i=0;i<s.length();i+=2)
        {
            if(s[i]=='0')
            zeroeven++;
            else if(s[i]=='1')
            oneeven++;
           
        }
        for(int j=1;j<s.length();j+=2)
        {
            if(s[j]=='0')
            zeroodd++;
            else if(s[j]=='1')
            oneodd++;
        }
        return min(zeroeven+oneodd,zeroodd+oneeven);
    }
};