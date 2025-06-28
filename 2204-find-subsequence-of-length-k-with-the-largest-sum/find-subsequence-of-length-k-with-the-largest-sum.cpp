class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> maxHeap;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minHeap;
        for(int i=0;i<nums.size();i++){
            maxHeap.push({nums[i],i});
            minHeap.push({nums[i],i});
        }
        vector<pair<int,int>> v;
        while(k--){
            pair<int,int> temp=maxHeap.top();
            v.push_back({temp.second,temp.first});
            maxHeap.pop();
        }
        sort(v.begin(),v.end());
        vector<int> ans;
        for(auto it:v)
        ans.push_back(it.second);

        return ans;

    }
};