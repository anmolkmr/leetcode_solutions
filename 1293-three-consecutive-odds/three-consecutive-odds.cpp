class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int odd=0;
        for(auto it:arr){
            if(it%2==0)
            odd=0;
            else
            odd++;
            if(odd==3)return true;
        }
        return false;
    }
};