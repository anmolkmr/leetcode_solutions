class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int totalSum=(rolls.size()+n)*mean;
        int currentSum=0;
        
        for(auto it:rolls){
            currentSum+=it;
        }
        int reqSum=totalSum-currentSum;
        cout<<reqSum<<endl;
        vector<int> ans;
        float t=(reqSum*1.0)/n;
        cout<<t;
        if(t==6){
            for(int i=0;i<n;i++){
                ans.push_back(int(t));
            
            }
            return ans;
        }
        else if(t>6){
            return ans;
        }
        else if(int(t)==0){
            return ans;
        }
        else if(t>0){
            for(int i=0;i<n-1;i++){
                ans.push_back(int(t));
            }
            if(reqSum-int(t)*(n-1)>6){
                int diff=reqSum-int(t)*(n-1)-6;
                for(int k=1;k<=diff;k++){
                    ans[ans.size()-k]++;
                }
                ans.push_back(6);
                return ans;
            }
            ans.push_back(reqSum-int(t)*(n-1));
        }
        return ans;



    }
};