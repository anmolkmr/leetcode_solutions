class Solution {
    public String longestCommonPrefix(String[] strs) {
        Arrays.sort(strs);
        String ans = "";
        String s1=strs[0],s2=strs[strs.length-1];
        int end = s1.length()<s2.length()?s1.length():s2.length();
        for(int i=0;i<end;i++){
            if(s1.charAt(i)==s2.charAt(i)){
                ans+=s1.charAt(i);
            }else{
                return ans;
            }
        }
        return ans;
    }
}