class Solution {
public:
    int findLHS(vector<int>& nums) {
        //12223357
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]-nums[i]==1){
                    ans=max(ans,j-i+1);
                }
            }
        }
        return ans;
    }
};