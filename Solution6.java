import java.io.*;
import java.util.*;

public class Solution6 {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int t,n,k,a;
        Scanner scan = new Scanner(System.in);
        t = scan.nextInt();
        int[] c = new int[t];
        for(int i=0;i<t;i++){
            c[i]=0;
            n = scan.nextInt();
            k = scan.nextInt();
            for(int j=0; j<n; j++){
                a = scan.nextInt();
                if(a<=0)
                    c[i]++;
            } 
            if(c[i]>=k)
                System.out.println("NO");
            else
                System.out.println("YES");
        }
        
        
    }
}