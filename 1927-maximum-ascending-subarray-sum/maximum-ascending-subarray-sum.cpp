class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum=0,cur=0,flag=1;
        if(nums.size()==1){
            return nums[0];
        }
        for(int i=0;i<nums.size()-1;i++){
            if(flag==1){
                cur+=nums[i];
            }
            if(nums[i]<nums[i+1]){
                flag=0;
                cur+=nums[i+1];
            }
            else if(nums[i]>=nums[i+1]){
                flag=1;
                sum=max(sum,cur);
                cur=0;
            }
            sum=max(sum,cur);
        }
        return sum;
    }
};