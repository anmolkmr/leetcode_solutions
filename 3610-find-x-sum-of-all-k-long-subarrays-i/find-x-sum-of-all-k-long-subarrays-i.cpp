class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int> res;
        for(int i=0;i<=nums.size()-k;i++){
            map<int,int> mp;
            priority_queue<pair<int,int>> maxh;
            for(int j=i;j<k+i;j++){
                mp[nums[j]]++;
            }
            for(auto it:mp){
                maxh.push({it.second,it.first});
            }
            int temp=x;
            int sum=0;
            while(!maxh.empty()&&temp--){
                sum+=maxh.top().first*maxh.top().second;
                maxh.pop();
            }
            res.push_back(sum);
        }
        return res;
    }
};