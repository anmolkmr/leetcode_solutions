class Solution {
public:
    //vector<pair<int,int>> invalid={{0,3},{2,3}};
    vector<pair<int,int>> moves={{2,-1},{2,1},{-2,-1},{-2,1},{-1,2},{-1,-2},{1,-2},{1,2}};
    vector<vector<int>> dialpad={{1,2,3},{4,5,6},{7,8,9},{-1,0,-1}};
    int MOD=1e9+7;

    int solve(int i,int j,int n,vector<vector<vector<long long>>> &dp)
    {
        if(i>=dialpad.size()||i<0||j<0||j>=dialpad[0].size()||(i==3&&j==0)||(i==3&&j==2))return 0;
        if(n==0)return 1;
        long long res=0;
        if(dp[i][j][n]!=-1)return dp[i][j][n];
        for(auto it:moves)
        {
            res += solve(i+it.first,j+it.second,n-1,dp) % MOD;
        }
        return dp[i][j][n]=res%MOD;
    }
    int knightDialer(int n) {
        long long res=0;
        vector<vector<vector<long long>>> dp(5,vector<vector<long long>>(5,vector<long long>(n,-1)));
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<3;j++)
            {
                if((i==3&&j==0)||(i==3&&j==2))continue;
                res+=solve(i,j,n-1,dp) % MOD;
            }
        }

        return res % MOD;
    }
};