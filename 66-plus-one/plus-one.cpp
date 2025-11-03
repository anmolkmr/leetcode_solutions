class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits[digits.size()-1]<9){
            digits[digits.size()-1]++;
            return digits;
        }
        else{
            int i=digits.size()-1;
            while(i>=0&&digits[i]==9){
                digits[i]=0;
                i--;
            }
            if(i<0){
                digits.insert(digits.begin()+0,1);
                return digits;
            }
            digits[i]++;
            return digits;
        }
    }
};