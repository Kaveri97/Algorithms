import java.io.*;
import java.util.*;

public class Solution17 {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        String[] a = new String[n];
        String s1 = " ",s2 = " ";
        for(int i=0; i<n; i++){
            a[i] = scan.next();
        }
        for(int j=0; j<n; j++){
            s1 = Character.toString(a[j].charAt(0));
            s2 = Character.toString(a[j].charAt(1));
            for( int k=2; k<a[j].length(); k++){
                if(k%2==0)
                    s1 = s1+a[j].charAt(k);
                
                else
                    s2 = s2+a[j].charAt(k);
            }
            System.out.println(s1 + " " + s2);
        }
        
    }
}