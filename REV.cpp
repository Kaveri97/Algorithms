class Solution {
public:
    int reverse(int x) {
        long int y=0;
        while(x!=0){
            int r = x%10;
            y = y*10 + r;
            x= x/10;
        }
        if(y>INT_MAX || y<INT_MIN)
            return 0;
        else 
            return y;
    }
};
