class Solution {
public:
    bool find(int o,vector<int> n){
        for(auto it:n){
            if(o==it){
                return true;
            }
        }
        return false;
    }
    int findFinalValue(vector<int>& nums, int original) {
        while(find(original,nums)){
            original=original*2;

        }
        return original;
    }
};