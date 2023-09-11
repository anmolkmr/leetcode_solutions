class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int ans=0;
        //if(rungs.size()==1&&rungs[0]/dist!=0)return rungs[0]/dist-1;
        for(int i=0;i<rungs.size();i++)
        {
            if(i==0)
            {
                if(rungs[i]%dist==0)
                ans+=(rungs[i]/dist)-1;
                else if(rungs[i]!=dist)
                ans+=((rungs[i])/dist);
            }
            else{
                if((rungs[i]-rungs[i-1])%dist==0)
                ans+=((rungs[i]-rungs[i-1])/dist)-1;
            else if((rungs[i]-rungs[i-1])!=dist)
            ans+=((rungs[i]-rungs[i-1])/dist);
            }
        }
        return ans;
    }
};