class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        long long ans=-1,sum=0;
        sort(nums.begin(),nums.end());
        for(auto it:nums){
            if(sum>it){
                ans=sum+it;
            }
            sum+=it;
        }
        return ans;
        
    }
};