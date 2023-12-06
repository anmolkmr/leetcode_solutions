class Solution {
public:
    int totalMoney(int n) {
        int t=n/7;
        int rs=1,sum=0;
        for(int i=0;i<t;i++)
        {sum+=(7*(2*rs+(6)))/2;rs++;}
        int rem=n%7;
        if(rem)
        {
            sum+=(rem*(2*rs+(rem-1)))/2;
        }
        return sum;
    }
};