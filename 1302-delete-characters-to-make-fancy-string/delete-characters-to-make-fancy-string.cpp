class Solution {
public:
    string makeFancyString(string s) {
         stack<char> st;
       char current=' ';
       int cnt;
       for(auto it:s){
        if(current!=it){
            cnt=1;
            current=it;
        }else{
            cnt++;
            if(cnt==3){
                cnt--;
                st.pop();
            }
        }
        
        st.push(it);
        
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