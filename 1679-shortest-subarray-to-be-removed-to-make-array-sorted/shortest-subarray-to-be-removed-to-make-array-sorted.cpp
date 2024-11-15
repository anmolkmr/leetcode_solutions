class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int i=0,j=arr.size()-1;
        while(j>0&&arr[j-1]<=arr[j]){      
            j--;
        }
        int res=j;
        while(i<j&&(i==0||arr[i]>=arr[i-1])){
            while((j<arr.size())&&arr[i]>arr[j]){
                j++;
            }
            res=min(res,j-i-1);
            i++;
        }
        return res;
    }
};