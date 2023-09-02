class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        int n=word.length();
        vector<int> div(n,0);
        long long int num=0;
        for(int i=0;i<n;i++)
        {
            num=(num*10)+word[i]-'0';
            num=num%m;
            if(num==0)
            div[i]=1;
        }
        return div;
    }
};