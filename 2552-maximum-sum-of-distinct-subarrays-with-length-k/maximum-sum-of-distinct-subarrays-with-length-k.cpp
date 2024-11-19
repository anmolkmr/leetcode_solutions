class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        map<long long,long long> mp;
        long long i=0,j=0,sum=0,ans=-1;
        while(j<nums.size()){
            if(j-i+1<=k){
                mp[nums[j]]++;
                sum+=nums[j];
            }
            if(j-i+1==k){
                if(mp.size()==k){
                    ans=max(ans,sum);
                }
            }
            else if(j-i+1>k){
                mp[nums[i]]--;
                sum-=nums[i];
                if(mp[nums[i]]==0){
                    mp.erase(nums[i]);
                }
                i++;
                j--;
            }
            j++;

        }
        if(ans==-1)return 0;
        return ans;
    }
};