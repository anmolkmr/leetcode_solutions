class Solution {
public:
    int sod(int n){
        int sum=0;
        while(n){
            int dig=n%10;
            sum+=dig;
            n=n/10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        vector<int> temp;
        for(auto it:nums){
            temp.push_back(sod(it));
        }
        map<int,vector<int>> mp;
        for(int i=0;i<temp.size();i++){
            mp[temp[i]].push_back(nums[i]);
        }
        priority_queue<pair<int,vector<int>>> pq;
        for(auto it:mp){
            pq.push({it.first,it.second});
            // cout<<it.first<<"-";
            // for(auto it1:it.second){
            //     cout<<it1<<" ";
            // }
            // cout<<endl;
        }
        int mx=-1;
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            if(it.second.size()>=2){
                vector<int> t=it.second;
                sort(t.begin(),t.end());
                mx=max(mx,t[t.size()-1]+t[t.size()-2]);
            }
        }
        return mx;
    }
};