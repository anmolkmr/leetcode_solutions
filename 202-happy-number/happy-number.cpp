class Solution {
public:
    int sum(int n){
        int s = 0;
        while(n){
            s+=(n%10)*(n%10);
            n=n/10;
        }
        return s;
    }
    bool isHappy(int n) {
        int k = n;
        while(n/10){
            n=sum(n);
            if(n == k)return false;
        }
        if(n == 1 || n == 7)return true;
        return false;
    }
};