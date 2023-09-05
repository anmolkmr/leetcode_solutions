class Solution {
public:
    bool checkStrings(string s1, string s2) {
        string odds1="",evens1="",odds2="",evens2="";
        if(s1.length()!=s2.length())return false;
        for(int i=0;i<s1.length();i++)
        {
            if(i%2==0)
            {
                evens1+=s1[i];
                evens2+=s2[i];
            }
            else{
                odds1+=s1[i];
                odds2+=s2[i];
            }
        }
        sort(evens1.begin(),evens1.end());
        sort(evens2.begin(),evens2.end());
        sort(odds1.begin(),odds1.end());
        sort(odds2.begin(),odds2.end());
        if(evens1==evens2&&odds1==odds2)return true;
        return false;
    }
};