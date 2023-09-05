class Solution {
public:
    int minimumOperations(string num) {
        bool zero=false;
        bool five=false;
        for(int i=num.length()-1;i>=0;i--)
        {
            if(zero&&num[i]=='0') return num.length()-i-2;
            if(zero&&num[i]=='5') return num.length()-i-2;
            if(five&&num[i]=='2') return num.length()-i-2;
            if(five&&num[i]=='7') return num.length()-i-2;
            if(num[i]=='0') zero=true;
            if(num[i]=='5') five=true;
        }
        if(zero)
        return num.size()-1;
        return num.size();
    }
};