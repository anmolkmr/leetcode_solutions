class Solution {
public:
    bool check(int m,vector<int>& candies, long long k){
        long long count=0,sum=0;
        if(m==0)return true;
        for(auto it:candies){
            if(it>=m)
            count+=(it/m);
        }
        if(count>=k){
            return true;
        }
        return false;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int right=*max_element(candies.begin(),candies.end()),left=0;
        int ans=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(check(mid,candies,k)){
                ans=max(ans,mid);
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return ans;
    }

};