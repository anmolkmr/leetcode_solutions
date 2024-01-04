class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt=0;
        map<int,int> mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        for(auto it:mp)
        {
            if(it.second==1)return -1;
            if(it.second%3==0)
            {
                cnt+=(it.second/3);
            }
            else if(it.second%3)
            {
                cnt+=((it.second)/3)+1;
            }
            else if(it.second%2==0)
            {
                cnt+=it.second/2;
            }
            else
            return -1;
        }
        return cnt;
    }
};