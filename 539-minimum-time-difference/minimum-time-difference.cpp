class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        //sort(timePoints.begin(),timePoints.end());
        vector<int> minutes(timePoints.size());
        int index=0;
        for(auto it:timePoints)
        {
            string hour=it.substr(0,2);
            string minute=it.substr(3);

            int hourInt=stoi(hour);
            int minuteInt=stoi(minute);

            minutes[index]=60*hourInt+minuteInt;
            index++;
        }
        sort(minutes.begin(),minutes.end());
        int res=INT_MAX;
        for(int i=0;i<minutes.size()-1;i++){
            res=min(res,minutes[i+1]-minutes[i]);
        }


        return min(res,24*60-minutes[minutes.size()-1]+minutes[0]);
    }
};