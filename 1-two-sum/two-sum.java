class Solution {
    public int[] twoSum(int[] nums, int target) {
        // ArrayList<Integer> ans = new ArrayList<>();
        // int[] ans=new int[2];
        // for(int i=0;i<nums.length;i++){
        //     for(int j=i+1;j<nums.length;j++){
        //         if(nums[i]+nums[j]==target){
        //             ans[0]=i;
        //             ans[1]=j;
        //         }
        //     }
        // }
        // int i=0,j=nums.length-1;
        // int[] ans= new int[2];
        // while(i<j){
        //     if(nums[i]+nums[j]<target){
        //         i++;
        //     }else if(nums[i]+nums[j]>target){
        //         j--;
        //     }else if(nums[i]+nums[j]==target){
        //         ans[0]=i;
        //         ans[1]=j;
        //         return ans;
        //     }
        // }
        // return ans;

        HashMap<Integer,Integer> mp = new HashMap<>();
        int ind=0;
        for(int it:nums){
            mp.put(it,ind);
            ind++;
        }
        int[] ans = new int[2];
        for(int i=0;i<nums.length;i++){
            
            int newTarget = target-nums[i];
            if(mp.containsKey(newTarget)){
                if(mp.get(newTarget)!=i){
                    int temp=mp.get(newTarget);
                    ans[0]=temp;
                    ans[1]=i;
                    return ans;
                }
        
            }
            
        }
        return ans;

    }
}