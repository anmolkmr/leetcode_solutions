class Solution {
public:
    bool bs(long long n,long long l,long long r,vector<int> &nums){
        
        while(l<=r){
        long long mid=l+(r-l)/2;
        if(nums[mid]==n){
            return true;
        }
        else if(nums[mid]>n){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
        }
        return false;
    }
    int longestSquareStreak(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mxstreak=0;
            for(long long i=0;i<nums.size();i++){
                int streak=0;
                long long temp=nums[i];
                long long left=i;
                long long right=nums.size()-1;
            while(bs(temp,left,right,nums)){
streak++;
temp=temp*temp;
mxstreak=max(mxstreak,streak);
            }
        }
        
        // bool b=bs(3,0,5,nums);
        // cout<<b;
        return mxstreak!=1?mxstreak:-1;
    }
};