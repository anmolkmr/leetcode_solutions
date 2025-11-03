class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=colors.length();
        int i=0,j=0,remove=0;
        while(j<n){
            int sum=0,mx=-1;
            while(j<n&&colors[i]==colors[j]){
                sum+=neededTime[j];
                mx=max(mx,neededTime[j]);
                j++;
            }
            remove+=sum-mx;
            i=j;
        }
        return remove;
    }
};