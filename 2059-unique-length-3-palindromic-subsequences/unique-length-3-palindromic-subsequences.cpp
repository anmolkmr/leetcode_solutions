class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int> right(26,-1),left(26,-1);
        set<char> arr;
        for(int i=0;i<s.length();i++){
            arr.insert(s[i]);
            int idx=s[i]-'a';
            if(right[idx]==-1){
                right[idx]=i;
            }
        }
        for(int i=s.length()-1;i>=0;i--){
            int idx=s[i]-'a';
            if(left[idx]==-1){
                left[idx]=i;
            }
        }
        int cnt=0;
        for(auto it:arr){
            int l=left[it-'a'];
            int r=right[it-'a'];
            cout<<r<<l;
            set<char> temp;
            for(int i=r+1;i<l;i++){
                temp.insert(s[i]);
            }
            cnt+=temp.size();
        }
        return cnt;
    }
};