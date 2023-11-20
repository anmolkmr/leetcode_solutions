class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int m=-1,g=-1,p=-1,mcn=0,gcn=0,pcn=0;
        for(int i=garbage.size()-1;i>0;i--)
        {
            string temp=garbage[i];
            for(auto it:temp)
            {
                if(it=='M'&&m==-1)
                m=i;
                else if(it=='G'&&g==-1)
                g=i;
                else if(it=='P'&&p==-1)
                p=i;
                if(it=='M')
                mcn++;
                else if(it=='P')
                pcn++;
                else if(it=='G')
                gcn++;
            }
        }
        for(auto it:garbage[0])
            {
                if(it=='M')
                mcn++;
                else if(it=='P')
                pcn++;
                else if(it=='G')
                gcn++;
            }
        int sum=mcn+pcn+gcn;
        for(int i=0;i<m;i++)
        sum+=travel[i];
        for(int i=0;i<g;i++)
        sum+=travel[i];
        for(int i=0;i<p;i++)
        sum+=travel[i];
        return sum;
    }
};