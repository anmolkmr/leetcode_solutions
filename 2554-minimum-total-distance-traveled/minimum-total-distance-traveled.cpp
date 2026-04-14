class Solution {
public:
    long long dp[101][10001];

    long long solve(int i, int j, vector<int>& robot, vector<int>& f) {
        if (i == robot.size()) return 0;
        if (j == f.size()) return 1e15; // large value instead of INT_MAX

        if (dp[i][j] != -1) return dp[i][j];

        long long pick = abs(robot[i] - f[j]) + solve(i + 1, j + 1, robot, f);
        long long skip = solve(i, j + 1, robot, f);

        return dp[i][j] = min(pick, skip);
    }

    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        sort(robot.begin(), robot.end());
        sort(factory.begin(), factory.end());

        vector<int> f;
        for (auto &it : factory) {
            for (int i = 0; i < it[1]; i++) {
                f.push_back(it[0]);
            }
        }

        memset(dp, -1, sizeof(dp));

        return solve(0, 0, robot, f);
    }
};