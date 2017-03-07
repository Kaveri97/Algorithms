import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution55 {
    public static void main(String args[] ) throws Exception {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] a = new int[n+1];
        int[] b = new int[n+1];
        for(int i=1; i<=n;i++){
            a[i] = scan.nextInt();
        }
        for(int j=1; j<=n; j++){
            for(int k=1; k<=n; k++){
                if(a[k]==j){
                    int N = k;
                    for(int l=1; l<=n; l++){
                        if(a[l]==N){
                            System.out.println(l);
                        }
                    }
                }
            }
        }
    }
}
