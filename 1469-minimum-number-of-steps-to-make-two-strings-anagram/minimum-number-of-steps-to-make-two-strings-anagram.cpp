class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> s1(26),t1(26);
        for(auto it:s)
        s1[it-'a']++;
        for(auto it:t)
        t1[it-'a']++;
        int cnt=0;
        for(int i=0;i<26;i++)
        {
            if(s1[i]>t1[i])
            {
                cnt+=s1[i]-t1[i];
            }
        }
        return cnt;
    }
};