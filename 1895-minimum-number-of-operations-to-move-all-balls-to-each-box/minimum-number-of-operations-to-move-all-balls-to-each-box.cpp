class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> one;
        for(int i=0;i<boxes.length();i++){
            if(boxes[i]=='1')
            one.push_back(i);
        }
        vector<int> ans(boxes.length());
        for(int i=0;i<ans.size();i++){
            int sum=0;
            for(auto it:one){
                sum+=abs(it-i);
            }
            ans[i]=sum;
        }
        return ans;

        //001011
        //012345
        // 245 2-0 4-0 5-0 2-1 4-1 5


    }
};