class Solution {
public:
    unordered_map<string,int> dp;

    int solve(int ind, vector<int>& nums, int target, int sum) {
        if(ind == nums.size()) {
            return sum == target;
        }

        string key = to_string(ind) + "," + to_string(sum);

        if(dp.count(key)) return dp[key];

        return dp[key] =
            solve(ind + 1, nums, target, sum + nums[ind]) +
            solve(ind + 1, nums, target, sum - nums[ind]);
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(0, nums, target, 0);
    }
};