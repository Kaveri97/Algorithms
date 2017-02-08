import java.io.*;
import java.util.*;

public class Solution41 {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int t,n,k;
        long a;
        t = (int )(Math.random() * 5 + 1);
        System.out.println(t);
        int[] c = new int[t];
        long x = (long)Math.pow(10,3)*-1;
        long y = (long)Math.pow(10,3);
        for(int i=0;i<t;i++){
            n = (int )(Math.random() * 200 + 1);
            k = (int )(Math.random() * n + 1);
            System.out.println(n+" "+k);
            a = 0;
            System.out.print(a+" ");
            for(int j=0; j<n-1; j++){
                a = x + 2*((int )(Math.random() * y + 1));
                System.out.print(a+" ");
            }
            System.out.println();
      }
        
        
    }
}