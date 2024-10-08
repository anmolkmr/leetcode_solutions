class Solution {
public:
    int minSwaps(string s) {
        stack<char> st;
        for(auto it:s){
            if(!st.empty()){
                char c=st.top();
                if(c=='['&&it==']')
                {
                    st.pop();
                }
                else{
st.push(it);
                }
            }
            else{
                st.push(it);
            }
                
            
        }
        int cnt=0;
        string temp="";
        while(!st.empty()){
            temp+=st.top();
            if(st.top()=='[')
            cnt++;
            st.pop();
        }
        cout<<temp;
        return (cnt+1)/2;
    }
};

