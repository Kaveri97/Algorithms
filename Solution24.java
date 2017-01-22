import java.io.*;
import java.util.*;

public class Solution24 {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int[] a = new int[20];
        int n = scan.nextInt();
        int i = 0, count = 1, countb = 1;
        while(n>0){
            a[i++] = n%2;
            n = n/2;
        }
        for(i=0; i<20; i++){
            if(a[i]==1 && a[i+1]==1){
                count++;
                if(a[i+2]==0){
                    if(count>countb){
                        countb = count;
                    }
                    count = 1;
                }
            }
        }
        if(count>countb)
            System.out.println(count);
        else
            System.out.println(countb);
    }
}