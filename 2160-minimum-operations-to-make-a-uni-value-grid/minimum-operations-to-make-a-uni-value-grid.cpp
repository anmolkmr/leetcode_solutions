class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> arr;
        int maxi=INT_MIN;
        map<int,int> mp;
        for(auto it:grid)
        {
            for(auto it1:it){
                maxi=max(maxi,it1);
                arr.push_back(it1);
                mp[it1]++;
            }
        }

        sort(arr.begin(),arr.end());

        for(auto it:arr){
            if((maxi-it)%x){
                return -1;
            }
        }
        int maximap=INT_MIN,no;
        int k=arr.size()/2;
        no=arr[k];
        // for(auto it:mp){
        //     if(maximap<it.second){
        //         maximap=it.second;
        //         no=it.first;
        //     }
        // }
        int steps=0;

        for(auto it:arr){
            steps+=(abs(no-it)/x);
        }
        return steps;



    }
};