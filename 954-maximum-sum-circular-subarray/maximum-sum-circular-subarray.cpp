class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=0,ans=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum>ans)
            ans=sum;
            if(sum<0)
            sum=0;
        }
        vector<int> temp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            temp.push_back(-nums[i]);
            else
            temp.push_back(abs(nums[i]));
        }
        int sum1=0,ans1=temp[0];
        for(int i=0;i<temp.size();i++)
        {
            sum1+=temp[i];
            if(sum1>ans1)
            ans1=sum1;
            if(sum1<0)
            sum1=0;
        }
        int tot=0;
        for(auto it:nums)
        tot+=it;
        if(abs(tot)==ans1)
        return ans;
        cout<<ans<<" "<<ans1;
        return max(ans,tot+ans1);
    }
};