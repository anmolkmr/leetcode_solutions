class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n=nums.size();
        long long sum=0;
        for(auto it:nums)
        sum+=it;
        long long tar=sum%p;

        if(sum%p==0)return 0;
        long long result=n;
        map<long long,long long> mp;
        mp[0]=-1;
        long long curr=0;
        //curr-prev=tar=>curr-tar=prev;
        for(long long i=0;i<n;i++){
            curr=(curr+nums[i])%p;
            long long remain=(curr-tar+p)%p;
            if(mp.find(remain)!=mp.end()){
                result=min(result,i-mp[remain]);
            }
            mp[curr]=i;
        }
        return result==n?-1:result;

    }
};