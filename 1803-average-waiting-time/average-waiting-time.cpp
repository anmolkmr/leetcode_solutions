class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int starting=0;
        double wait=0;
        for(int i=0;i<customers.size();i++){
            if(i==0){
                starting=customers[i][0]+customers[i][1];
                wait+=starting-customers[i][0];
            }
            else if(customers[i][0]<=starting){
                wait+=starting-customers[i][0];
                starting+=customers[i][1];
                wait+=customers[i][1];
            }
            else{
                starting=customers[i][0]+customers[i][1];
                wait+=customers[i][1];
            }
        }
        return wait/customers.size();
        
    }
};