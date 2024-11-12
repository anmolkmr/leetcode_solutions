class Solution {
public:
    int bs(int num,vector<vector<int>> &items){
        int left=0,right=items.size()-1,mid,ans=0;
        while(left<=right){
            mid=(left+right)/2;
            if(items[mid][0]<=num){
                ans=items[mid][1];
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        //if(ans==-1)return items[right][1];
        return ans;
    }
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(),items.end());
        int mx=-1;
        for(int i=0;i<items.size();i++){
            mx=max(mx,items[i][1]);
            items[i][1]=mx;
        }
        vector<int> ans;
        for(auto it:queries){
            ans.push_back(bs(it,items));
        }
        return ans;
    }
};