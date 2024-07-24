class Solution {
public:
    int seperate(int n,vector<int> &mapp){
        vector<int> temp;
        if(n==0)
        return mapp[0];
        while(n){
            int dig=n%10;
            temp.push_back(mapp[dig]);
            n=n/10;
        }
        reverse(temp.begin(),temp.end());
        int real=0;
        for(auto it:temp){
            real=it+(real*10);
        }
        return real;
        
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<int> temp;
        map<int,vector<int>> ds;
        for(auto it:nums){
            int l=seperate(it,mapping);   
            temp.push_back(l);
            ds[l].push_back(it);
        }
         vector<int> ans;
        for(auto it:ds){
            cout<<it.first<<" ";
            for(auto it1:it.second)
            {cout<<it1<<" ";
            ans.push_back(it1);}
            cout<<endl;
        }
        // priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> minh;

        // for(int i=0;i<nums.size();i++){
        //     minh.push({temp[i],{i,nums[i]}});
        // }
       
        // while(!minh.empty()){
        //     ans.push_back(minh.top().second.second);

        //     cout<<minh.top().first<<" "<<minh.top().second.first<<" "<<minh.top().second.second<<endl;
        //     minh.pop();
        // }
        return ans;
    }
};