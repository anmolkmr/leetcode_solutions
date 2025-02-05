class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int > a;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                a.push_back(i);
            }
        }
         if(a.size()==0)return true;
        if(a.size()!=2)return false;

        cout<<a[0]<<a[1]<<endl;

        swap(s2[a[0]],s2[a[1]]);
        cout<<s1<<s2;
        if(s1==s2)return true;
        return false;
    }
};