class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        map<int,int> mp1,mp2;
        vector<int> ans;
        int cnt=0;
        for(int i=0;i<A.size();i++){
            cnt=0;
            mp1[A[i]]++;
            mp2[B[i]]++;
            for(auto it:mp1){
                if(mp1[it.first]==mp2[it.first])
                cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};

