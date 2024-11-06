class Solution {
    public String longestCommonPrefix(String[] strs) {
        Arrays.sort(strs);
        String a=strs[0],b=strs[strs.length-1],ans="";
        System.out.println(a);
        System.out.println(b);
        int i=0,j=0;

        while(i<a.length()&&j<b.length()){
            if(a.charAt(i)==b.charAt(j))
            ans+=a.charAt(i);
            else
            return ans;
            i++;
            j++;
           
        }
        return ans;

    }
}