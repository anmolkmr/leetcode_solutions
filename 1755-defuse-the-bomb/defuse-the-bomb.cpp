class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> ans;
        if(k==0){
        ans.resize(code.size());
        return ans;
        }
        if(k>0){
            for(int i=0;i<code.size();i++){
                int sum=0;
                for(int j=1;j<=k;j++){
                    sum+=(code[(i+j)%code.size()]);
                }
                ans.push_back(sum);
            }
        }
        if(k<0){
            for(int i=0;i<code.size();i++){
                int sum=0;
                for(int j=-1;j>=k;j--){
                    if(i+j>=0)
                    sum+=(code[(i+j)%code.size()]);
                    else{
                        sum+=(code[(code.size()+(i+j))%code.size()]);
                    }
                }
                ans.push_back(sum);
            }

        }
        return ans;

    }
};