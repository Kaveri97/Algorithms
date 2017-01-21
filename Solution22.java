import java.io.*;
import java.util.*;
import java.lang.Math.*;

public class Solution22 {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        int[][] a = new int[t][2];
        for(int j=0; j<t;j++){
            a[j][0] = scan.nextInt();
            a[j][1] = scan.nextInt();
        }
        for(int k=0; k<t; k++){
            double n = Math.sqrt(a[k][0]);
            double m = Math.sqrt(a[k][1]);
            int count = 0;
            for(int i=(int)n;n<(int)m;n++)
                count++;
            System.out.println(count);
        }
    }
}