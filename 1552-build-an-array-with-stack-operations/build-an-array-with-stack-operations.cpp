class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> st;
        int i=1;
        int index=0;
        while(index<target.size()&&i<=n)
        {
            if(index<target.size()&&i==target[index])
            {
                st.push_back("Push");
                i++;
                index++;
            }
            else if(index<target.size()&&i!=target[index]){
                st.push_back("Push");
                st.push_back("Pop");
                i++;
            }
        }

        return st;
    }
};