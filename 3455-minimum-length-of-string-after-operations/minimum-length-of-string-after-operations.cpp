class Solution {
public:
    int minimumLength(string s) {
        map<char,int> mp;
        int cnt=0;
        for(auto it:s){
            mp[it]++;

        }
        for(auto it:mp){
            cnt+=(it.second%2)?1:2;
        }
        return cnt;
    }
};
// bb=2
// b=1//9
// bb=2
// b=1
// bbbbbb=2
// bbbbb=1 
// a=3=1
// b=4 bbbb=2
// c=2