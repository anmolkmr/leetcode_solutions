class Solution {
public:
    string removeOccurrences(string s, string part) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
             st.push(s[i]);
            if(st.size()>=part.length()){
                int ind=part.length()-1;
                string k="";
                while(ind>=0&&part[ind]==st.top()){
                    k+=st.top();
                    st.pop();
                    ind--;
                }
                if(ind>=0){
                    for(int j=k.length()-1;j>=0;j--){
                        st.push(k[j]);
                    }
                }
            }
           
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};