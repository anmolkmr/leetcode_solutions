class Solution {
public:
    int count(string s)
    {
        int cnt=0;
        for(auto it:s)
        {
            if(it=='A'||it=='E'||it=='I'||it=='O'||it=='U'||it=='a'||it=='e'||it=='i'||it=='o'||it=='u')
            cnt++;
        }
        return cnt;
    }
    bool halvesAreAlike(string s) {
        int n=s.length()/2;
        string temp1="",temp2="";
        for(int i=0;i<n;i++)
        temp1+=s[i];
        for(int i=n;i<s.length();i++)
        temp2+=s[i];
        return count(temp1)==count(temp2);
        
    }
};