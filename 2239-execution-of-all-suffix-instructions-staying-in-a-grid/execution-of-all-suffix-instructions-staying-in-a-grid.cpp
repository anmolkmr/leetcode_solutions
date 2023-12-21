class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int ind=0;
        int travi;
        int travj;
        vector<int> ans;
        for(int i=0;i<s.length();i++)
        {
            int cnt=0;
            int tind=i;
        travi=startPos[0];
        travj=startPos[1];
        while(tind<s.length()&&travi>=0&&travj>=0&&travi<n&&travj<n)
        {
            if(s[tind]=='R'&&travj+1>=0&&travj+1<n)
            {
                travj=travj+1;
                cnt++;
            }
            else if(s[tind]=='D'&&travi+1>=0&&travi+1<n)
            {
                travi=travi+1;cnt++;
            }
            else if(s[tind]=='L'&&travj-1>=0&&travj-1<n)
            {
                travj=travj-1;cnt++;
            }
            else if(s[tind]=='U'&&travi-1>=0&&travi-1<n)
            {
                travi=travi-1;cnt++;
            }
            else break;
            tind++;
        }
        ans.push_back(cnt);
        }
        return ans;
    }
};