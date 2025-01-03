class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum=0;
        vector<long long> pre,suf;
        for(auto it:nums){
            sum+=it;
            pre.push_back(sum);
        }
        sum=0;
        for(long long i=nums.size()-1;i>=0;i--){
            sum+=nums[i];
            suf.push_back(sum);
        }
        reverse(suf.begin(),suf.end());
        for(auto it:suf){
            cout<<it<<endl;
        }
        long long cnt=0;
        for(long long i=0;i<pre.size()-1;i++){
            if(pre[i]>=suf[i+1])
            cnt++;
        }
        return cnt;
     
    }
};