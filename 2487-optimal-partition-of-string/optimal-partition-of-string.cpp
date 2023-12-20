class Solution {
public:
    int partitionString(string s) {
        set<char> st;
        int i=0,j=0,cnt=0;
        while(j<s.length())
        {
            st.insert(s[j]);
            if(j-i+1==st.size())
            {
            }
            else if(j-i+1>st.size())
            {
                cnt++;
                st.clear();
                j--;
                i=j+1;
            }
            j++;
        }
        return cnt+1;
    }
};