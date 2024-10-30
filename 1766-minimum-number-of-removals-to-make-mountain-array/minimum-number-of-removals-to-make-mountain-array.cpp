class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        vector<int> lis,lismax,lisrev,lisrevmax,rlismax,rlisrevmax;
        int maxi=0;
        int maxloc=-1;
        for(int i=0;i<nums.size();i++){
            int curr=0;
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    curr=max(curr,lis[j]);
                }
            }
            lis.push_back(curr+1);
            if(maxi<=curr+1){
                maxi=curr+1;
                maxloc=nums[i];
                
            }
            rlismax.push_back(maxloc);
            lismax.push_back(maxi);
        }
            int maxirev=0;
            maxloc=-1;
            
            for(int i=nums.size()-1;i>=0;i--){
            int curr=0;
            int ind=0;
            for(int j=nums.size()-1;j>=i;j--){
                if(nums[i]>nums[j]){
                    curr=max(curr,lisrev[ind]);
                }
                ind++;
            }
            lisrev.push_back(curr+1);
            if(maxirev<=curr+1){
                maxirev=curr+1;
                maxloc=nums[i];
            }
            rlisrevmax.push_back(maxloc);
            lisrevmax.push_back(maxirev);
            
        }

        for(auto it:lis){
            cout<<it<<" ";
        }
        cout<<endl;
        for(auto it:lismax){
            cout<<it<<" ";
        }
cout<<endl;

for(auto it:rlismax){
            cout<<it<<" ";
        }

reverse(lisrev.begin(),lisrev.end());
reverse(lisrevmax.begin(),lisrevmax.end());
reverse(rlisrevmax.begin(),rlisrevmax.end());

              for(auto it:lisrev){
            cout<<it<<" ";
        }
        
        cout<<endl;
        for(auto it:lisrevmax){
            cout<<it<<" ";
        }
        cout<<endl;
        for(auto it:rlisrevmax){
            cout<<it<<" ";
        }
        int ans=INT_MIN;
        for(int i=1;i<nums.size()-1;i++){
            int left=0,right=0;
            for(int j=i+1;j<nums.size();j++){
                if(rlisrevmax[j]<nums[i]){
                    right=max(right,lisrev[j]);
                }
            }
            for(int j=0;j<i;j++){
                if(rlismax[j]<nums[i]){
                    left=max(left,lis[j]);
                }
            }
            if(left!=0&&right!=0)
            ans= max(ans,(left+right+1));
        }



        
        return nums.size()-ans;
    }
};