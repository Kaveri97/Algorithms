import java.io.*;
import java.util.*;

public class Solution7 {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        long a,f;
        long t = scan.nextLong();
        for(int i=0; i<t; i++){
            long n = scan.nextLong();
            long l = scan.nextLong();
            a = 1&n;
            for(int j=1;j<n;j++){
                for(int k=j+1; k<=n;k++){
                    f = j&k;
                    if(f>a && f<l){
                        a = f;
                    }
                }
            }
          System.out.println(a);  
        }
    }
}