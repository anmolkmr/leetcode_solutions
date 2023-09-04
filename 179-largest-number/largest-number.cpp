class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int sum=0;
        for(auto it:nums)
        {
            sum+=it;
            if(it>0)
            break;
        }
        if(sum==0) return "0";
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                string temp1=to_string(nums[i])+to_string(nums[j]);
                string temp2=to_string(nums[j])+to_string(nums[i]);
                int l=0,m=0;
                if(temp1<temp2)
                        swap(nums[i],nums[j]);

            }
        }
        string ans="";
        for(auto it:nums)
        ans+=to_string(it);
        return ans;
    }
};