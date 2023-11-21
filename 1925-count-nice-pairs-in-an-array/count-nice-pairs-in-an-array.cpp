class Solution {
public:
    long long ll=1e9+7;
    map<long long,long long> mp;
    long long rev(long long n)
    {
        string t=to_string(n);
        reverse(t.begin(),t.end());
        return stoi(t);
    }
    int countNicePairs(vector<int>& nums) {
        vector<long long> temp;
        for(auto it:nums)
        {
            temp.push_back(it-rev(it));
        }
        for(auto it:temp)
        mp[it]++;
        long long ans=0;
        for(auto it:mp)
        {
            long long n=it.second-1;
            ans+=(n*(n+1))/2;
        }
        return ans%ll;
    }
};