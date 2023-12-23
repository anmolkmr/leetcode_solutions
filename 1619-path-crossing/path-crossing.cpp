class Solution {
public:
    bool isPathCrossing(string path) {
        int i=0,j=0;
        set<pair<int,int>> st;
        st.insert({0,0});
        for(auto it:path)
        {
            int t=st.size();
            if(it=='N')
            {
                i=i+1;
                st.insert({i,j});
                if(t==st.size())
                return true;
            }
            else if(it=='E')
            {
                j=j+1;
                st.insert({i,j});
                if(t==st.size())
                return true;
            }
            else if(it=='S')
            {
                i=i-1;
                st.insert({i,j});
                if(t==st.size())
                return true;
            }
            else if(it=='W')
            {
                j=j-1;
                st.insert({i,j});
                if(t==st.size())
                return true;
            }

        }
        return false;
    }
};