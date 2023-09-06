class Solution {
public:
    int minimumNumbers(int num, int k) {
        if(num==0)
        return 0;
        if(num<k)
        return -1;
        for(int i=1;i<=10;i++)
        {
            if(num%10==(i*k)%10)
            {if(k*i>num)return -1;
            return i;}
        }
        return -1;
    }
    
};