class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        map<int,vector<int>> adj;
        vector<int> indegree(n,0);
        vector<bool> sus(n,false);
        vector<int> vis(n,0);
        for(auto it:invocations){
            adj[it[0]].push_back(it[1]);
            indegree[it[1]]++;
        }
        queue<int> q;
        q.push(k);
        vis[k]=1;
        sus[k]=true;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it:adj[node]){
                indegree[it]--;
                if(!vis[it]){
                    sus[it]=true;
                
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
        for(auto it:sus){
            cout<<it<<endl;
        }
        // cout<<"uhh";
        //  for(auto it:indegree){
        //     cout<<it<<endl;
        // }


        int flag=1;
        for(int i=0;i<n;i++){
            if(sus[i]==true&&indegree[i]>0){
                flag=0;
                break;
            }
        }
        if(flag==0){
            vector<int> temp(n,0);
            for(int i=0;i<n;i++){
                temp[i]=i;
            }
            return temp;
        }
        // else{
            vector<int> temp;
            for(int i=0;i<n;i++){
                if(sus[i]==false){
                    temp.push_back(i);
                    // cout<<"aahh";
                }
            }
            return temp;
        // }
        // return {};
    }
};