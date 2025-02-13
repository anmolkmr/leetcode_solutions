class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long,vector<long long>,greater<long long>> minh;
        for(auto it:nums){
            minh.push(it);
        }
        long long cnt=0;
        while(minh.top()<k){
            long long x=minh.top();
            minh.pop();
            long long y=minh.top();
            minh.pop();
            minh.push(min(x,y)*2+max(x,y));
            cnt++;
        }
        return cnt;
    }
};