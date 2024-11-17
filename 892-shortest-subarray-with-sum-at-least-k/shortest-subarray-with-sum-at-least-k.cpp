class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>> minh;
        long long prefixSum=0;
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            prefixSum+=nums[i];
            if(prefixSum>=k){
                ans=min(ans,i+1);
            }
            while(!minh.empty()&&prefixSum-minh.top().first>=k){
                ans=min(ans,i-minh.top().second);
                minh.pop();
            }
            minh.push({prefixSum,i});
        }
        if(ans==INT_MAX)return -1;
        return ans;
    }
};