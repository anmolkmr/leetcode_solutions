class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int> ,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }
        while(k--){
            auto temp = pq.top();
            temp.first=temp.first*multiplier;
            pq.pop();
            pq.push(temp);
        }

        vector<int> a(nums.size());
        while(!pq.empty()){
            auto temp=pq.top();
            a[temp.second]=temp.first;
            pq.pop();
        }
        return a;
    }
};