class Solution {
public:
    int minLength(string sk) {
        stack<char> st;
        string s=sk;
        // while(true){
        for(auto it:s){
            if(st.empty())
            {
                st.push(it);
            }
            else{
                char c=st.top();
                if(c=='A'&&it=='B')
                {
                    st.pop();
                }
                else if(c=='C'&&it=='D')
                {
                    st.pop();
                }
                else{
                    st.push(it);
                }
            }
        
        }
        return st.size();
        
    }
};