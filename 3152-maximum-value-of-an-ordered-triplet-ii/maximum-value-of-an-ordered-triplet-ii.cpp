class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre(n),suf(n);
        for(int i=1;i<n;i++){
            pre[i]=max(pre[i-1],nums[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            suf[i]=max(suf[i+1],nums[i+1]);
        }
        long long res=0;
        for(int i=0;i<n;i++){
            res=max(res,(long long)(pre[i]-nums[i])*suf[i]);
        }
        return res;
    }
};