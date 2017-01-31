import java.io.*;
import java.util.*;

public class Solution35 {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int i,j,k,c=0,n,r=0,d=0;
        int rev =0;
        Scanner scan = new Scanner(System.in);
        i = scan.nextInt();
        j = scan.nextInt();
        k = scan.nextInt();
        for(int l=i;l<=j;l++){
            rev = 0;
            n = l;
            while(n!=0){
              r = n%10;
              rev = rev*10 + r;
              n = n/10;
            }
            d = Math.abs(l-rev);
            if(d%k==0){
                c++;
            }
        }
        System.out.println(c);
    }
}