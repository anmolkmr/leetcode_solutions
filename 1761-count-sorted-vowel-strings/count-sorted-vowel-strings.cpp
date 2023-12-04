class Solution {
public:
    int solve(int n,string &temp,int prev)
    {
        if(temp.length()==n)return 1;
        int a=0,b=0,c=0,d=0,e=0;
        if(prev==-1||'a'>=temp[prev])
         {
             temp.push_back('a');
             a=solve(n,temp,temp.size()-1);
             temp.pop_back();
         }
        if(prev==-1||'e'>=temp[prev]){
            temp.push_back('e');
         b=solve(n,temp,temp.size()-1);
         temp.pop_back();}
        if(prev==-1||'i'>=temp[prev]){
            temp.push_back('i');
         c=solve(n,temp,temp.size()-1);
         temp.pop_back();}
        if(prev==-1||'o'>=temp[prev]){
            temp.push_back('o');
         d=solve(n,temp,temp.size()-1);
         temp.pop_back();}
        if(prev==-1||'u'>=temp[prev]){
            temp.push_back('u');
         e=solve(n,temp,temp.size()-1);
         temp.pop_back();}
         return a+b+c+d+e;

    }
    int countVowelStrings(int n) {
        string temp;
        return solve(n,temp,-1);
    }
};