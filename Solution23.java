import java.io.*;
import java.util.*;

public class Solution23 {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int d1,d2;
        int m1,m2;
        int y1,y2;
        d1 = scan.nextInt();
        m1 = scan.nextInt();
        y1 = scan.nextInt();
        d2 = scan.nextInt();
        m2 = scan.nextInt();
        y2 = scan.nextInt();
        long fine = 0;
        if(y1<=y2){
            if(m1<=m2){
                if(m1<m2){
                    fine = 0;
                }
                else{
                if(d1>d2)
                 fine = (d1-d2)*15;
                else 
                 fine = 0; 
            }
            }
            else if(m1>m2 && y1==y2){ 
                fine = (m1-m2)*500;
            }
        }
        else
            fine = 10000;
        System.out.print(fine);
        }
    }
