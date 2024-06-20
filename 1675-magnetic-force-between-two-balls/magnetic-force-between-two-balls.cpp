class Solution {
public:
    bool check(int t,vector<int>& p,int m,map<int,bool> s){
        int ball=1;
        int last=p[0];
        for(int i=1;i<p.size();i++){
            if(p[i]-last>=t){
                ball++;
                last=p[i];
                if(ball==m)
                return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        map<int,bool> mp;
        for(auto it:position){
            mp[it]=true;
        }
        sort(position.begin(),position.end());
        int low=INT_MAX;
        for(int i=1;i<position.size();i++)
        {
            low=min(low,position[i]-position[i-1]);
        }
                int high=position[position.size()-1],mid=0,answer=0;
        while(low<=high){
            mid=(low+high)/2;
            cout<<mid<<endl;
            if(check(mid,position,m,mp)){
                answer=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return answer;
    }
};