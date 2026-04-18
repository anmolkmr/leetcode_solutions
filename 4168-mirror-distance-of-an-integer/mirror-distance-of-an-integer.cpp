class Solution {
public:
    int mirrorDistance(int n) {
       int dig=0,rev=0,num=n;
       while(num){
        dig=num%10;
        rev=(rev*10)+dig;
        num=num/10;
       } 
       return abs(n-rev);
    }
};