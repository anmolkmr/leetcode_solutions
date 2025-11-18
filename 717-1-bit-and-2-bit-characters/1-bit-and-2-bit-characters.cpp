class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n= bits.size();
        bool onebit=false;
        for(int i=0;i<n;i++){
            if(bits[i]==1&&(bits[i+1]==1||bits[i+1]==0)){
                i++;
                onebit=false;
            }else{
                onebit=true;

            }
        }
        return onebit;

     
    }
};