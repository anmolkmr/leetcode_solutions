class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count=0;
        int ssize=s.size()-1;
        int gsize=g.size()-1;
        while(ssize>=0&&gsize>=0){
            if(g[gsize]<=s[ssize]){
                gsize--;
                ssize--;
                count++;
            }
            else{
                gsize--;
            }
        }

        return count;
    }
};