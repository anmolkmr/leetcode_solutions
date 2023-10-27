

  class Solution {
public:
    int romanToInt(string s) {
        int i,num=0;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='I'){
                if(s[i+1]=='V')
                { num=num+4;i=i+1;}
                else if(s[i+1]=='X')
                {num=num+9;i=i+1;}
                else
                    num=num+1;
            }
            else if(s[i]=='X')
            {
                if(s[i+1]=='L')
                {num=num+40;i=i+1;}
                else if(s[i+1]=='C')
                {num=num+90;i=i+1;}
                else
                    num=num+10;
            }
            else if(s[i]=='C')
            {
                if(s[i+1]=='D')
                {num=num+400;i=i+1;}
                else if(s[i+1]=='M')
                {num=num+900;i=i+1;}
                else
                    num=num+100;
            }
            else if(s[i]=='V'){
                num=num+5;
            }
            else if(s[i]=='L')
                num=num+50;
            else if(s[i]=='D')
                num=num+500;
            else if(s[i]=='M')
                num=num+1000;
        
            
        }
        return num;
    }
};
        
   