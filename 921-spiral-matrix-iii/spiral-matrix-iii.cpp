class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> ans;
        int inc=1;
        ans.push_back({rStart,cStart});
        // ans.size()<=rows*cols
        int temp=10;
        while(ans.size()!=rows*cols){
            for(int k=0;k<inc;k++){
               if(cStart+1<cols&&rStart<rows&&(cStart+1>-1)&&(rStart>-1))
                ans.push_back({rStart,cStart+1});
                cStart=cStart+1;
            }
            for(int k=0;k<inc;k++){
               if(cStart<cols&&rStart+1<rows&&cStart>-1&&(rStart+1)>-1)
                ans.push_back({rStart+1,cStart});
                rStart=rStart+1;
            }
            inc++;
            for(int k=0;k<inc;k++){
               if((cStart-1)<cols&&rStart<rows&&(cStart-1)>-1&&rStart>-1)
                ans.push_back({rStart,cStart-1});
                cStart=cStart-1;
            }
            for(int k=0;k<inc;k++){
                if(cStart<cols&&(rStart-1)<rows&&cStart>-1&&(rStart-1)>-1)
                ans.push_back({rStart-1,cStart});
                rStart=rStart-1;
            }
            inc++;
            temp--;
        }
        return ans;
        
    }
};