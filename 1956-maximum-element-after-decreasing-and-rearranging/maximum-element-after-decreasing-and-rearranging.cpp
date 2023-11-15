class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int num=1;
        arr[0]=1;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]>num)
            {
                num++;
            }
        }
        return num;
    }
};