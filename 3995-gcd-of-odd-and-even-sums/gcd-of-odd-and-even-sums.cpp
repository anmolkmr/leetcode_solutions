class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd=0,even=0;
        for(int i=0;i<=n*2;i++){
            if(i%2==1){
                odd+=i;
            }else{
                even+=i;
            }
        }

        cout<<odd<<" "<<even;

        for(int k=min(odd,even);k>=1;k--){
            if(odd%k==0&&even%k==0)return k;
        }
        return 0;
    }
};