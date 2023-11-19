class Solution {
public:
    long long minimumSteps(string s) {
        long long ans=0,onecount=0;
        for(auto it:s)
        {
            if(it=='1')
            onecount++;
            else
            ans+=onecount;

        }
        return ans;
    }
};