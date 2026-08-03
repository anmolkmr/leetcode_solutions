class Solution {
public:
    int solve(int ind, vector<int>& nums, vector<int>& dp) {
        if (ind == nums.size() - 1)
            return 0;
        if (ind >= nums.size())
            return 1e9;

        if (dp[ind] != -1)
            return dp[ind];

        int ans = 1e9;

        for (int jump = 1; jump <= nums[ind]; jump++) {
            ans = min(ans, 1 + solve(ind + jump, nums, dp));
        }

        return dp[ind] = ans;
    }

    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return solve(0, nums, dp);
    }
};