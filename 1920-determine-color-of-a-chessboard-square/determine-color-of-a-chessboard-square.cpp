class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if((coordinates[0]-'a'+1)%2==0&&(coordinates[1]-'0')%2==0){
            return false;
        }
        if((coordinates[0]-'a'+1)%2==1&&(coordinates[1]-'0')%2==1){
            return false;
        }
        if((coordinates[0]-'a'+1)%2==0&&(coordinates[1]-'0')%2==1){
            return true;
        }
        if((coordinates[0]-'a'+1)%2==1&&(coordinates[1]-'0')%2==0){
            return true;
        }
        return false;
    }
};