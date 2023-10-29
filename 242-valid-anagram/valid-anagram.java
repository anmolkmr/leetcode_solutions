import java.io.*;
import java.util.*;
class Solution {
    public boolean isAnagram(String s, String t) {
        Vector<Integer> s1=new Vector<Integer>();
        Vector<Integer> t1=new Vector<Integer>();
        for(int i=0;i<26;i++)
        {
            s1.add(0);
            t1.add(0);
        }
        for(int i=0;i<s.length();i++)
        {
            int temp=s.charAt(i)-'a';
            s1.set(temp,s1.get(temp)+1);
        }
        for(int i=0;i<t.length();i++)
        {
            int temp=t.charAt(i)-'a';
            t1.set(temp,t1.get(temp)+1);
        }
        System.out.println(s1);
        System.out.println(t1);
        if(s1.equals(t1))
        return true;
        return false;
        }
}