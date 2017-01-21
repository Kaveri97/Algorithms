import java.io.*;
import java.util.*;

public class Solution21 {
    public int factorial (int i){
        if( i<=1){
            return 1;
        }
        else{
            return i*factorial(i-1);
        }
    }
    
    
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Solution21 s = new Solution21();
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int f = s.factorial(n);
        System.out.println(f);
    }
}