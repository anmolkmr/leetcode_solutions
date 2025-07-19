class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        unordered_set<string> st(folder.begin(),folder.end());
        vector<string> res;
        for(auto &it:folder){
            bool isSubFolder= false;
            string temp=it;
            while(!it.empty()){
                auto pos = it.find_last_of('/');
                it = it.substr(0,pos);
                if(st.find(it)!=st.end()){
                    isSubFolder=true;
                    break;
                }
            }
            if(!isSubFolder){
                res.push_back(temp);
            }
        }
        return res;
    }
};