class Solution {
    public boolean canJump(int[] nums) {
        int highJump=0;
        for(int i=0;i<nums.length;i++){
            if(i<=highJump)
            highJump=Math.max(highJump,i+nums[i]);
            if(i>highJump){
                return false;
            }
        }
        return true;
    }
}