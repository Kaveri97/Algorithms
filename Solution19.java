import java.io.*;
import java.util.*;

public class Solution19 {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int n;
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        int i,j;
        for(j=0; j<n;j++){
            for(i=0;i<n-j-1;i++){
                System.out.print(" ");
              }
            for(;i<n;i++){
                System.out.print("#");
            }
            System.out.println("");
        }
    }
}