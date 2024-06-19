class Solution {
public:
    int possible(vector<int>& bloomDay,int day,int m,int k){
        int bouquets=0;
        int cnt = 0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day)
            {cnt++;}
            else {
                bouquets+=cnt/k;
                cnt = 0;
            }
        }
        bouquets+=cnt/k;
        return bouquets;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int mid;
        int answer=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            int temp=possible(bloomDay,mid,m,k);
            if(temp>=m)
            {
                answer=mid;
                high=mid-1;;
            }
            else{
                low=mid+1;
            }
        }
        return answer;

    }
};