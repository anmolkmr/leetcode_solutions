class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long i=0,j=0,cur=0;
        int ans=INT_MIN;
        while(j<nums.size())
        {
            int tar=nums[j];
            cur+=tar;
            while(tar*(j-i+1)-cur>k)
            {
                cur-=nums[i];
                i++;
            }
            ans=max(ans,int(j-i+1));
            j++;
        }
        return ans;
    }
};