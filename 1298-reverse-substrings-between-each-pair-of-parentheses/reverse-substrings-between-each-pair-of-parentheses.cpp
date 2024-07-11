class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        string ans="";
        for(int i=0;i<s.length();i++){
            
            if(s[i]==')'){
                string temp="";
                while(st.top()!='(')
                {temp+=st.top();
                st.pop();}
                st.pop();
                for(auto it:temp){
                    st.push(it);
                }
            }
            else
            st.push(s[i]);
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());

        return ans;
    }
};