class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int time=0;
        for(int i=0;i<colors.length()-1;i++)
        {
            if(colors[i]==colors[i+1])
            {
                int l;
                if(neededTime[i]>=neededTime[i+1])
                {
                    l=neededTime[i+1];
                    neededTime[i+1]=neededTime[i];
                }
                else
                {
                    l=neededTime[i];
                    neededTime[i]=neededTime[i+1];
                }
                time+=l;
            }
        }
        return time;
    }
};
//8+8+10