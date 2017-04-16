import java.io.*;
import java.util.*;

public class Solution65 {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        long N = scan.nextLong();
        String s = scan.next();
        long u=0,count = 0;
        int flag = 0;
        for(int i=0; i<N;i++){
            if(s.charAt(i)=='U'){
                u++;
            }
            if(s.charAt(i)=='D'){
                u--;
            }
            if(u<0 && flag==0){
                count++;
                flag = 1;
            }
            if(u>=0)
                flag = 0;
        }
        System.out.println(count);
    }
}
