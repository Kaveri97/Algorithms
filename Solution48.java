import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution48 {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        String[] s = new String[n];
        for (int i=0; i<n; i++){
            s[i] = scan.next();
        }
        int q = scan.nextInt();
        String[] t = new String[q];
        for (int i=0; i<q; i++){
            t[i] = scan.next();
        }
        for(int j=0; j<q; j++){
            int count = 0;
            for( int k=0; k<n; k++){
                if(t[j].equals(s[k]))
                    count++;
            }
            System.out.println(count);
        }
    }
}