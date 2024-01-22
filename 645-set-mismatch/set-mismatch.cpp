class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int> mp;
        int sum=0,fsum=((nums.size())*(nums.size()+1))/2,dup;
        for(auto it:nums)
        mp[it]++;
        for(auto it:mp)
        {
            sum+=it.first;
            if(it.second>1)
            dup=it.first;
        }
        return {dup,fsum-sum};
    }
};