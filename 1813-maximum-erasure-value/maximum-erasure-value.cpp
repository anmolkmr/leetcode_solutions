class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int i=0,j=0,sum=0,ans=0;
        map<int,int> mp;
        while(j<nums.size()){
            if(mp[nums[j]]==0){
                mp[nums[j]]++;
            sum+=nums[j];
            ans=max(ans,sum);
            j++;
            }else{
                while(mp[nums[j]]>=1){
                    sum-=nums[i];
                    mp[nums[i]]--;
                    i++;
                }
            }
            
        }
        return ans;
    }
};