class Solution {
public:
    int solve(int ind,int tar,vector<int> &nums)
    {
        if(ind<0)
        {
            if(tar==0)return 1;
            return 0;
        }
       int pos=solve(ind-1,tar-nums[ind],nums);
       int neg=solve(ind-1,tar+nums[ind],nums);
        return pos+neg;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(nums.size()-1,target,nums);

    }
};