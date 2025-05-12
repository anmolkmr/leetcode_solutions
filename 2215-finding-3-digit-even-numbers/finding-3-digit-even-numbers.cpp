class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int> s;
        for(int i=0;i<digits.size();i++){
            for(int j=0;j<digits.size();j++){
                if(i==j)continue;
                for(int k=0;k<digits.size();k++){
                    if(i==j||i==k||j==k)
                    continue;
                    int num = (digits[i]*100)+(digits[j]*10)+digits[k];
                    if(num<100||num%2)
                    continue;
                    s.insert(num);
                }
            }
        }

        vector<int> ans;
        for(auto it:s)
        ans.push_back(it);
        return ans;
    }
};