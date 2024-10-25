class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end());
        vector<string> ans;
        ans.push_back(folder[0]);
        
        for(int i=1;i<folder.size();i++){
            string temp=ans[ans.size()-1];
            temp+='/';
            if(folder[i].compare(0,temp.size(),temp)){
                ans.push_back(folder[i]);
            }
        }
        return ans;

    }
};