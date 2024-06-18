class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        priority_queue<pair<int,int>> pq;
        vector<pair<int,int>> pd;
        for(int i=0;i<profit.size();i++){
            pq.push({profit[i],difficulty[i]});
        }
        while(!pq.empty()){
            pd.push_back(pq.top());
            pq.pop();
        }
        int ind=0;
        sort(worker.begin(),worker.end(),greater<int>());
        long long p=0;
        for(auto it:pd){
            cout<<it.first<<" "<<it.second<<endl;
        }
        for(int i=0;ind<pd.size()&&i<worker.size();i++){
            if(pd[ind].second<=worker[i]){
                p+=pd[ind].first;
            }
            else{
                while(ind<pd.size()&&pd[ind].second>worker[i]){
                    ind++;
                }
                if(ind<pd.size())
                p+=pd[ind].first;
            }
        }
        return p;
    }
};
