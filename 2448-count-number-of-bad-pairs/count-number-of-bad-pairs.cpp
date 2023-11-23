class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]-i;
        }
        long long temp1=(n*(n-1))/2;
        map<long long,long long> mp;
        for(auto it:nums)
        mp[it]++;
        long long temp2=0;
        for(auto it:mp)
        {
            if(it.second>1)
            {
                temp2+=((it.second)*(it.second-1))/2;
            }
        }
        return temp1-temp2;

    }
};