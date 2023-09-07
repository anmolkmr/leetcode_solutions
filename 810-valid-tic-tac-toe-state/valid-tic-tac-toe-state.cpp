class Solution {
public:
    bool validTicTacToe(vector<string>& board) {
        int x=0,o=0;
        for(auto it:board)
        {
            for(auto it1:it)
            {
                if(it1=='X')
                x++;
                else if(it1=='O')
                o++;
            }
        }
        if(x==1&&o==0)
        return true;
        else if(o>x)
        return false;
        else if(x==o)
        {
            if((board[0]=="XXX"||board[1]=="XXX"||board[2]=="XXX")||(board[0][0]=='X'&&board[1][0]=='X'&&board[2][0]=='X')||(board[0][1]=='X'&&board[1][1]=='X'&&board[2][1]=='X')||(board[0][2]=='X'&&board[1][2]=='X'&&board[2][2]=='X')||(board[0][0]=='X'&&board[1][1]=='X'&&board[2][2]=='X')||(board[0][2]=='X'&&board[1][1]=='X'&&board[2][0]=='X'))
            return false;
            return true;

        }
        else if(x==o+1)
        {
            if((board[0]=="OOO"||board[1]=="OOO"||board[2]=="OOO")||(board[0][0]=='O'&&board[1][0]=='O'&&board[2][0]=='O')||(board[0][1]=='O'&&board[1][1]=='O'&&board[2][1]=='O')||(board[0][2]=='O'&&board[1][2]=='O'&&board[2][2]=='O')||(board[0][0]=='O'&&board[1][1]=='O'&&board[2][2]=='O')||(board[0][2]=='O'&&board[1][1]=='O'&&board[2][0]=='O'))
            {return false;}
            return true;
            }
        return false;

    }
};