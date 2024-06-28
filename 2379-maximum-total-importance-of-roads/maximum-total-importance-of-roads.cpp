class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        priority_queue<pair<int,int>> maxh;
        map<int,vector<int>> adj;
        for(auto it:roads){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        for(auto it:adj){
            maxh.push({it.second.size(),it.first});
        }
        map<int,int> values;
        int ind=n;
        while(!maxh.empty()){
            pair<int,int> tp;
            tp=maxh.top();
            values[tp.second]=ind;
            ind--;
            maxh.pop();
        }
        // for(auto it:values){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        long long sum=0;
        for(auto it:roads){
            sum+=values[it[0]]+values[it[1]];
        }
        return sum;
    }
};