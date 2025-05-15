class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> ans1;
        int curr=1;
       for(int i=0;i<groups.size();i++){
        if(curr!=groups[i]){
            ans1.push_back(words[i]);
            curr=(curr==1)?0:1;
        }
       }

       vector<string> ans2;
     curr=0;
       for(int i=0;i<groups.size();i++){
        if(curr!=groups[i]){
            ans2.push_back(words[i]);
            curr=(curr==1)?0:1;
        }
       }
       return ans1.size()>ans2.size()?ans1:ans2;
    }
};