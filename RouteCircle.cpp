/*
Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.

The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L (Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle.

*/
class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0;
        int y=0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='U')
            {
                y++;
            }
            else if(moves[i]=='D')
            {
                y--;
            }
            else if(moves[i]=='R')
            {
                x++;
            }
            else if(moves[i]=='L')
            {
                x--;
            }
        }
        
        if(x==0 && y==0)
            return true;
        else 
            return false;
    }
};
