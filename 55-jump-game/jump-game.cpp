class Solution {
public:
    bool canJump(vector<int>& nums) {
        int highJump=0;
        for(int i=0;i<nums.size();i++){
            if(i<=highJump)
            highJump=max(highJump,i+nums[i]);
            if(i>highJump){
                return false;
            }
        }
        return true;
    }
};