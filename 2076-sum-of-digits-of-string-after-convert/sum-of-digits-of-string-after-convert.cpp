class Solution {
public:
    int sod(int n){
        int sum=0;
        while(n){
            sum+=n%10;
            n=n/10;
        }
        return sum;
    }
    int getLucky(string s, int k) {
        vector<int> temp;
        for(auto it:s){
            temp.push_back((it-'a')+1);
        }
        int ans=0;
        for(auto it:temp)
        ans+=sod(it);
        k--;
        while(k--){
            ans=sod(ans);
        }
        return ans;
    }
};