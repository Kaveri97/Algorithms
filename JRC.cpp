class Solution {
public:
    bool judgeCircle(string moves) {
       long long int l=0,u=0;
        for(int i=0; i<moves.length();i++){
            if(moves[i]=='U')
                u++;
            else if(moves[i]=='D')
                u--;
            else if(moves[i]=='L')
                l++;
            else if(moves[i]=='R')
                l--;
        }
        if(u==0 && l==0){
            return true;
        }else{
            return false;
        }
    }
};



