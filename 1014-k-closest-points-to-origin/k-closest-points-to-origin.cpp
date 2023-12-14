//#define pair<float,vector<int>> pair<float,vector<int>>;
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,vector<int>>> maxh;
        for(auto it:points)
        {
            double dist=sqrt((it[0]*it[0])+(it[1]*it[1]));
            maxh.push({dist,it});
            if(maxh.size()>k)
            maxh.pop();
        }
        vector<vector<int>> ans;
        while(!maxh.empty())
        {
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
        return ans;
    }
};