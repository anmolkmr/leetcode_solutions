class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx==fx&&sy==fy&&t==1)return false;
        int x=abs(sx-fx);
        int y=abs(sy-fy);
        int diag=min(x,y);
        x-=diag;
        y-=diag;
        if(x+y+diag<=t)return true;
        return false;
    }
};