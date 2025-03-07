class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> ans;
        for(int i=0;i<=right;i++){
            ans.push_back(i);
        }
        vector<int> m;
        for(int i=2;i<=right;i++){
            
            if(ans[i]!=-1)
            if(left<=i&&i<=right)
            m.push_back(i);
            for(int j=2;(j*i)<=right;j++){
                ans[j*i]=-1;
            }
        }
        int mini=INT_MAX;
        vector<int> l(2,-1);
        for(int i=1;i<m.size();i++){
            if(mini>m[i]-m[i-1]){
                mini=m[i]-m[i-1];
                l[1]=m[i];
                l[0]=m[i-1];
            }
        }
        return l;
    }
};