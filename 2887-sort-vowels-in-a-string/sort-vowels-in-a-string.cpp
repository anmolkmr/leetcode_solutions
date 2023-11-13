class Solution {
public:
    string sortVowels(string s) {
        string vov="";
        for(auto it:s)
        {
            if(it=='u'||it=='o'||it=='i'||it=='e'||it=='a'||it=='U'||it=='O'||it=='I'||it=='E'||it=='A')
            {vov.push_back(it);}
        }
        sort(vov.begin(),vov.end());
        int index=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='u'||s[i]=='o'||s[i]=='i'||s[i]=='e'||s[i]=='a'||s[i]=='U'||s[i]=='O'||s[i]=='I'||s[i]=='E'||s[i]=='A')
            {
                s[i]=vov[index];
                index++;
            }
        }
        return s;

    }
};