class Solution {
    public int repeatedNTimes(int[] nums) {
        Map<Integer,Integer> mp = new HashMap();
        for(int i:nums){
            mp.put(i,mp.getOrDefault(i,0)+1);
        }
        for(int k:mp.keySet()){
            if(mp.get(k)==nums.length/2){
                return k;
            }
        }
        return 0;
    }
}