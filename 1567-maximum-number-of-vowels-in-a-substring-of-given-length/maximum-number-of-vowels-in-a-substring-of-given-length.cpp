class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0;
        int j=0;
        map<char,int> mp;
        int maxcount=0;
        while(j<s.length())
        {
            mp[s[j]]++;
            if(j-i+1<k)
            j++;
            else if(j-i+1==k)
            {
                maxcount=max(maxcount,mp['a']+mp['e']+mp['i']+mp['o']+mp['u']);
                j++;
            }
            if(j-i+1>k)
            {
                mp[s[i]]--;
                i++;
            }
        }
        return maxcount;
    }
};

//  abciiidef k=3
//  ide         a->0 i->1 e->1
// a->1
//e->1