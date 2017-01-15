import java.io.*;
import java.util.*;

public class Solution10 {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int t,k,r,c=0;
        t = scan.nextInt();
        int[] n = new int[t];
        for( int i=0; i<t; i++){
            n[i] = scan.nextInt();
        }
        for(int j=0; j<t; j++){
            k = n[j];
            c=0;
            while(n[j]!=0){
              r = n[j]%10;
                if(r!=0){
                if(k%r==0){
                    c++;
                }
                }
              n[j] = n[j]/10;
            }
            System.out.println(c);
        }
    }
}