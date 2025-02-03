class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int cnt1=1,inc=1,dec=1,cnt2=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1])
            {
                cnt1++;
                inc=max(inc,cnt1);
            }
            if(nums[i]>nums[i+1]){
                cnt2++;
                dec=max(dec,cnt2);
            }
            if(nums[i]>=nums[i+1])
            {cnt1=1;}
            if(nums[i]<=nums[i+1]){
                cnt2=1;
            }

        }
        return max(inc,dec);
    }
};