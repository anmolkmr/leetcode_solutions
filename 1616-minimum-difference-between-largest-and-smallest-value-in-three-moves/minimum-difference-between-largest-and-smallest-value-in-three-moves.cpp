class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<5)return 0;
        int diff=nums[nums.size()-1]-nums[0];
        int del=3;
        int i=3,j=nums.size()-1;
        // while(i<j&&del--){
        //     if(nums[j-1]-nums[i]>nums[j]-nums[i+1]){
        //         i++;
        //     }
        //     else{
        //         j--;
        //     }
        // }
        int mn=INT_MAX;
        while(i>-1){
            mn=min(nums[j]-nums[i],mn);
            j--;
            i--;
        }
        
        
        return mn;
    }
};