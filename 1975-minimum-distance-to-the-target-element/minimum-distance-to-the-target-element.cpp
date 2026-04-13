class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int rightIndex=-1,leftIndex=-1;
        for(int i=start;i<nums.size();i++){
            if(nums[i]==target){
                rightIndex=i;
                break;
            }
        }
        for(int i=start;i>=0;i--){
            if(nums[i]==target){
                leftIndex=i;
                break;
            }
        }

        if(leftIndex==-1)return abs(start-rightIndex);
        if(rightIndex==-1)return abs(start-leftIndex);
        return min(abs(start-rightIndex),abs(start-leftIndex));
    }
};