class Solution {
    public int[] twoSum(int[] nums, int target) {
        int arr[]={0,0};
        HashMap<Integer,Integer> mp=new HashMap<>();
        for(int i=0;i<nums.length;i++)
        {
            int more=target-nums[i];
            if(mp.containsKey(more))
            {
                arr[0]=i;
                arr[1]=mp.get(more);
                return arr;
            }
            mp.put(nums[i],i);
        }
        return arr;
    }
}