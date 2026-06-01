class Solution {
public:
    int solve(int ind,vector<int> &nums,vector<int> &dp){
        if(ind==0)return nums[ind];
        if(ind<0)return 0;
        if(dp[ind]!=-1)return dp[ind];
        int pick = nums[ind] + solve(ind-2,nums,dp);
        int notpick = solve(ind-1,nums,dp);
        return dp[ind]=max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        vector<int> dp(nums.size()+1,-1),dp2(nums.size()+1,-1),nums2,nums3;
        for(int i=0;i<nums.size()-1;i++){
            nums2.push_back(nums[i]);
        }

        for(int i=1;i<nums.size();i++){
            nums3.push_back(nums[i]);
        }

        // nums.push_back(nums[0]);
        return max(solve(nums2.size()-1,nums2,dp),solve(nums3.size()-1,nums3,dp2));

    }
};

