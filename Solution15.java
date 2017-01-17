import java.io.*;
import java.util.*;

public class Solution15 {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int N;
        N = scan.nextInt();
        long sum =0;
        long[] a = new long[N];
        for(int i=0; i<N; i++){
            a[i] = scan.nextLong();
            sum = sum + a[i];
        }
        System.out.println(sum);
    }
}