import java.io.*;
import java.util.*;
 
class Solution {
    public String reverseWords(String s) {
        Vector v = new Vector();
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)!=' ')
            {
                String str="";
                while(i<s.length()&&s.charAt(i)!=' ')
                {
                    str+=s.charAt(i);
                    i++;
                }
                v.add(str);
            }
        }

        String ans="";
        for(int i=v.size()-1;i>=0;i--)
        {
            ans+=v.get(i);
            if(i!=0)
            ans+=" ";
        }
        return ans;
    }
}