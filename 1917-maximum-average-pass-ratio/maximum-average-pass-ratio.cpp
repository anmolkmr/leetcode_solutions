class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<double,int>> pq;
        double sum=0;
        int ind=0;
        for(auto it:classes){
            double prevmark=(it[0]*1.0)/it[1];
            double newmark=((it[0]+1)*1.0)/(it[1]+1);
            pq.push({newmark-prevmark,ind});
            ind++;

        }
        while(extraStudents--){
            pair<double,int> temp=pq.top();
            pq.pop();
            int idx=temp.second;
            classes[idx][0]++;
            classes[idx][1]++;

            double prevmark=(classes[idx][0]*1.0)/classes[idx][1];
            double newmark=((classes[idx][0]+1)*1.0)/(classes[idx][1]+1);

            pq.push({newmark-prevmark,idx});

        }
        // double sum=0;
        for(auto it:classes){
            sum+=(it[0]*1.0)/it[1];
        }

        return sum/classes.size();
    }
};