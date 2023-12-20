class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int> mp;
        for(auto it:nums)
        mp[it]++;
        int cnt=0;
        for(auto it:mp)
        cout<<it.first<<" "<<it.second<<endl;
        for(auto it:mp)
        {
            if(it.second==1)return -1;
            if(it.second%3==0)
            cnt+=(it.second/3);
            else if(it.second%3==1)
            cnt+=(it.second/3)+1;
            else if(it.second%3==2)
            cnt+=(it.second/3)+1;
            else if(it.second%2==0)
            cnt+=(it.second/2);
            else
            return -1;

        }
        return cnt;
    }
};