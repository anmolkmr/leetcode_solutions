class Solution {
    public int jump(int[] nums) {
        int l=0,r=0,jump=0;
        while(r<nums.length-1){
            int far=Integer.MIN_VALUE;
            for(int i=l;i<=r;i++){
                far=Math.max(far,i+nums[i]);
            }
            l++;
            r=far;
            jump++;

        }
        return jump;
    }
}