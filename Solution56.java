import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution56 {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for(int i=0; i<t; i++){
            int n = scan.nextInt();
            int m = scan.nextInt();
            int s = scan.nextInt();
            if((m+s-1)%n==0)
                System.out.println(n);
            else 
                System.out.println((m+s-1)%n);
        }
    }
}
