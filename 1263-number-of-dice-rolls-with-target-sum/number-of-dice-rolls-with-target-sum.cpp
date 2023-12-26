class Solution {
public:
    int ll=1e9+7;
    long long solve(long long ind,long long tar,vector<long long> &temp,vector<vector<long long>> &dp,int k)
    {
        if(ind<0){
            if(tar==0)return 1;
            return 0;
        }
        if(tar==0)return 1;
        if(ind==0)
        {
            return tar==temp[0];
        }
        if(dp[ind][tar]!=-1)return dp[ind][tar];
        long long nottake=solve(ind-1,tar,temp,dp,k)%ll;
        long long take=0;
        if(tar>=temp[ind])
        {
            take=solve(ind-k,tar-temp[ind],temp,dp,k)%ll;
        }
        return dp[ind][tar]=(take+nottake)%ll;
    }

    // long long numRollsToTarget(long long n, long long k, long long target) {
    //     vector<long long> temp;
        
    //     for(long long i=0;i<n;i++)
    //     {
    //         for(long long j=1;j<=k;j++)
    //         temp.push_back(j);
    //     }
    //     //sort(temp.begin(),temp.end());
    //     for(auto it:temp)cout<<it<<" ";
    //     long long nsize=temp.size()-1;
    //     vector<vector<long long>> dp(nsize+1,vector<long long>(nsize+1,-1));
    //     return solve(nsize,target,temp,dp,k-1);
    // }
    int numRollsToTarget(int d, int f, int target) {
    vector<int> ways(target + 1);
    ways[0] = 1;
    int mod = pow(10, 9) + 7;
    for (int x=1;x<=d;x++) {
        for (int i = target; i >= 0; i--) {
            int way = 0;
            for (int y = i - 1; y >= max(0, i - f);  y--) way = (way + ways[y]) % mod;
            ways[i] = way;
        }
    }
    return ways[target];
}
};