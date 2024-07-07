class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drink=numBottles,empty=numBottles,temp=0;
        while(empty>=numExchange){
            drink+=empty/numExchange;
            empty=empty/numExchange+(empty%numExchange);
        }
        return drink;

    }
};