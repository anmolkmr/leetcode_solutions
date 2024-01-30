class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto it:tokens) {
            if(it!="+"&&it!="-"&&it!="*"&&it!="/")
            {
                st.push(stoi(it));
            }
            else if(it=="+") {
                int one=st.top();
                st.pop();
                int two=st.top();
                st.pop();
                st.push(two+one);
            }
            else if(it=="-") {
                int one=st.top();
                st.pop();
                int two=st.top();
                st.pop();
                st.push(two-one);
            }
            else if(it=="*") {
                int one=st.top();
                st.pop();
                int two=st.top();
                st.pop();
                st.push(two*one);
            }
            else if(it=="/") {
                int one=st.top();
                st.pop();
                int two=st.top();
                st.pop();
                st.push(two/one);
            }
        }
        return st.top();
    }
};