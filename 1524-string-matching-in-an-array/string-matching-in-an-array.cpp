class Solution {
public:
    bool contains(string s,string t){
        for(int i=0;i<=s.length()-t.length();i++){
            string temp = s.substr(i,t.length());
            if(temp==t)return true;
        }
        return false;
    }
    vector<string> stringMatching(vector<string>& words) {
        set<string> ans;
        cout<<contains("anmol","l");
        for(auto it:words){
            for(auto it1:words){
                if(it!=it1){
                    string sho=it.length()>it1.length()?it1:it;
                    string loo=it.length()>it1.length()?it:it1;
                    if(contains(loo,sho)){
                        ans.insert(sho);
                    }
                }
            }
        }
        vector<string> ans1;
        for(auto it:ans)
        ans1.push_back(it);
        return ans1;
    }
};