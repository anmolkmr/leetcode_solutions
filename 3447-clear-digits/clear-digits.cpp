class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for(auto it:s){
            if(it-'0'>=0&&it-'0'<10){
                st.pop();
            }
            else{
            st.push(it);}
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