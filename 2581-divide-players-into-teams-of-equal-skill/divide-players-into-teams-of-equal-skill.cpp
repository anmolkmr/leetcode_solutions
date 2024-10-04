class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int i=0,j=skill.size()-1,n;
        long long res=0,sum=0;
        sort(skill.begin(),skill.end());
        for(auto it:skill)
        sum+=it;
        if(j+1<2)
        return -1;
        int tar=sum/((j+1)/2);
        //cout<<sum<<tar<<j/2;
        while(i<j)
        {
            if(skill[i]+skill[j]==tar)
            {
                res+=(skill[i]*skill[j]);
                i++;
                j--;
            }
            else
            return -1;
        }
        return res;
    }
};