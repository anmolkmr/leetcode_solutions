class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        priority_queue<pair<int,string>> pq;
        for(int i=0;i<names.size();i++){
            pq.push({heights[i],names[i]});
        }
        vector<string> temp;
        while(!pq.empty()){
            pair<int,string> l=pq.top();
            temp.push_back(l.second);
            pq.pop();
        }
        return temp;
    }
};