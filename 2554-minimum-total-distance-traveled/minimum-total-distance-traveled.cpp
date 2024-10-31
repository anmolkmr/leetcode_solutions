class Solution {
public:
    long long solve(int ri,int fi,vector<int> &r,vector<int> &f,vector<vector<long long>> &dp){
        if(ri==r.size())return 0;
        if(fi==f.size())return 1e12;
        if(dp[ri][fi]!=-1)return dp[ri][fi];

        long long pick = abs(r[ri]-f[fi])+solve(ri+1,fi+1,r,f,dp);
        long long notpick = solve(ri,fi+1,r,f,dp);

        return dp[ri][fi]=min(pick,notpick);
    }
    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        sort(robot.begin(),robot.end());
        sort(factory.begin(),factory.end());
        vector<int> factories;
        for(auto it:factory){
            for(int i=0;i<it[1];i++){
                factories.push_back(it[0]);
            }
        }
        vector<vector<long long>> dp(robot.size()+1,vector<long long>(factories.size()+1,-1));
        return solve(0,0,robot,factories,dp);
        
    }
};