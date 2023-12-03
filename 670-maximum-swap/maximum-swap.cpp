class Solution {
public:
    int maximumSwap(int num) {
        vector<int> n;
        int t=num;
        while(num)
        {
            n.push_back(num%10);
            num=num/10;
        }
        reverse(n.begin(),n.end());
        vector<int> temp;
        for(int i=0;i<n.size();i++)
        {
            temp.push_back(*max_element(n.begin()+i,n.end()));
        }
        long long ans=0;
        for(auto it:temp)
        cout<<it;
        cout<<endl;
         for(auto it:n)
        cout<<it;
        for(int i=0;i<n.size();i++)
        {
            if(n[i]!=temp[i])
            {
                int l=n[i];
                swap(n[i],temp[i]);
                cout<<endl<<l<<i;
                for(int j=n.size()-1;j>=i+1;j--)
                if(n[j]==n[i])
                {
                    n[j]=l;
                    break;
                }
                for(auto it:n)
                {
                    ans=(ans*10)+it;
                }
                return ans;

            }

        }
        return t;
        
    }
};