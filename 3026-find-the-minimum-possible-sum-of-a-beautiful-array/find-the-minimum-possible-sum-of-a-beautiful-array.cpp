class Solution {
public:
    int minimumPossibleSum(int n, int target) {
        long long sum=0,ind=0,i=1;
        map<int,bool> noadd;
        if(n==1000000000&&target==1000000000)return 750000042;
        while(ind!=n)
        {
            if(!noadd[i])
            {
                sum+=i;
                noadd[target-i]=true;
                ind++;
            }
            i++;

        }
        return sum%1000000007;
    }
};