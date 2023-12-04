class Solution {
public:
    string largestGoodInteger(string num) {
        int mx=-1;
        for(int i=0;i<num.length()-2;i++)
        {
            //cout<<num[i]<<endl;
            if((num[i]==num[i+1])&&(num[i]==num[i+2]))
            {
                string s="";
                for(int j=i;j<i+3;j++)
                s+=num[j];
                mx=max(mx,stoi(s));
            }
        }
        if(mx==-1)return "";
        if(mx==0)return "000";
        return to_string(mx);

    }
};