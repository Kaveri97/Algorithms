class Solution {
public:
    int findComplement(int num) {
        int i=0;
        while(num>(pow(2,i)-1)){
            i++;
        }
        int r = (pow(2,i)-1);
        int res = num^r;
        return res;
    }
};
