class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int rt = sqrt(c);
        for(double i=0;i<=rt;i++){
            double b = sqrt(c - (i*i)); 
            if(b == (int)b)
                return true;
        }
        return false;
    }
    
    
};
