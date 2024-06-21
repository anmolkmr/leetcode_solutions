class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        vector<int> temp(customers.size());
        for(int i=0;i<customers.size();i++){
            if(grumpy[i]==1)
            {
                temp[i]=customers[i];
            }
        }
        int sum=0,j=0,i=0,mx=0,ini=-1,inj=-1;
        while(j<temp.size()){
            
            if(j-i+1<minutes){
                sum+=temp[j];
                j++;
            }
            if(j-i+1==minutes){
                sum+=temp[j];
                if(mx<sum){
                    mx=sum;
                    ini=i;
                    inj=j;
                }
                j++;
            }
            if(j-i+1>minutes){
                sum-=temp[i];
                i++;
            }
        }
        cout<<mx<<endl<<ini<<endl<<inj;
        int answer=0;
        for(int i=0;i<customers.size();i++){
            if(grumpy[i]==0)
            answer+=customers[i];
            else if(i>=ini&&i<=inj)
            answer+=customers[i];
        }
        return answer;

    }
};

