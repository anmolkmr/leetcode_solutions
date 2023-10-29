class Solution {
    public int strStr(String haystack, String needle) {
        for(int i=0;i<haystack.length();i++)
        {
            int start=i,temp=i,j=0;
            while(temp<haystack.length()&&j<needle.length()&&haystack.charAt(temp)==needle.charAt(j))
            {
                j++;
                temp++;
            }
            if(j==needle.length())
            return start;
        }
        return -1;
    }
}