//Write your code here
class Calculator1 implements AdvancedArithmetic{
    public int divisorSum (int n){ 
        int i = 2;
        if(n==1)
            return 1;
        else{
        int sum = n+1;
        for(;i<n/2+1;i++){
            if(n%i==0){
                sum += i;
            }
        }
        return sum;
        }
    }
}