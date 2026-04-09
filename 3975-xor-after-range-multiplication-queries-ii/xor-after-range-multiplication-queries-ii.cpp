class Solution {
public:
    int M = 1e9 + 7;

    long long power(long long a, long long b) {
        if (b == 0) return 1;

        long long half = power(a, b / 2);
        long long result = (half * half) % M;

        if (b % 2 == 1) {
            result = (result * a) % M;
        }
        return result;
    }

    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int break1 = ceil(sqrt(n));

        map<int, vector<vector<int>>> mp;

        // Step 1: Direct + Bucket queries
        for (auto &it : queries) {
            if (it[2] >= break1) {
                for (int i = it[0]; i <= it[1]; i += it[2]) {
                    nums[i] = (1LL * nums[i] * it[3]) % M;
                }
            } else {
                mp[it[2]].push_back({it[0], it[1], it[3]});
            }
        }

        // Step 2: Process small step queries
        for (auto &p : mp) {
            int step = p.first;
            auto &vec = p.second;

            vector<long long> ak(n + 1, 1);

            for (auto &it1 : vec) {
                int start = it1[0];
                int endRange = it1[1];
                int mul = it1[2];

                ak[start] = (ak[start] * mul) % M;

                int steps = (endRange - start) / step;
                int end = start + (steps + 1) * step;

                if (end < n) {
                    ak[end] = (ak[end] * power(mul, M - 2)) % M;
                }
            }

            // Prefix multiplication (step-wise)
            for (int i = 0; i < n; i++) {
                if (i - step >= 0) {
                    ak[i] = (ak[i] * ak[i - step]) % M;
                }
            }

            // Apply to nums
            for (int i = 0; i < n; i++) {
                nums[i] = (1LL * nums[i] * ak[i]) % M;
            }
        }

        // Step 3: XOR result
        int result = 0;
        for (int &num : nums) {
            result ^= num;
        }

        return result;
    }
};