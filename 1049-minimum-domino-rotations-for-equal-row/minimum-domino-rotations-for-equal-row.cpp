class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        map<int,int> mp;
        for(int i=0;i<tops.size();i++){
            if(tops[i]!=bottoms[i]){
                mp[tops[i]]++;
                mp[bottoms[i]]++;
            }else{
                mp[tops[i]]++;
            }
        }
        int an=-1;
        for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
        if(it.second==tops.size()){
            an=it.first;
        }
        
        }
        if(an==-1)return -1;
        int ans1=0,ans2=0;
        for(int i=0;i<tops.size();i++){
            if(tops[i]!=an)
            ans1++;
            if(bottoms[i]!=an)
            ans2++;
        }
        return min(ans1,ans2);
    }
};