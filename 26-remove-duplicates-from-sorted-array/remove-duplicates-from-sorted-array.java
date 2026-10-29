class Solution {
    public int removeDuplicates(int[] nums) {
        LinkedHashSet<Integer> s=new LinkedHashSet<>();
        for(int it:nums){
            s.add(it);

        }
        int ind=0;
        for(int it:s){
            nums[ind]=it;
            ind++;
        }
        return ind;
    }
    
}