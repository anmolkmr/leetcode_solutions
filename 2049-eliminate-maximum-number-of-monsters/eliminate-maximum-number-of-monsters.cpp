class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<float> time;
        int count=1;
        for(int i=0;i<speed.size();i++)
        {
            time.push_back((1.0*dist[i])/speed[i]);
        }
        sort(time.begin(),time.end());
        for(int i=1;i<time.size();i++)
        {
            if(count>=time[i])
            return count;
            count++;
        }
        return count;
    }
};