import java.io.*;
import java.util.*;
//Bon Appetit
public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int n,k,tot;
        int bCh=0;
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        k = scan.nextInt();
        int[] c = new int[n];
        for(int i=0; i<n; i++){
            c[i] =scan.nextInt();
            if(i!=k)
                bCh += c[i];   
        }
        bCh = bCh/2;
        tot = scan.nextInt();
        if(tot == bCh){
            System.out.println("Bon Appetit");
        }
        else
           System.out.println(tot-bCh); 
    }
}