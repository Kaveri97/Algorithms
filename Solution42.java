import java.io.*;
import java.util.*;

public class Solution42 {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        int a, s,flag=1;
        for(int i=0; i<t; i++){
            flag = 1;
            a = scan.nextInt();
            s = (int)Math.ceil(Math.sqrt(a));
            for(int j=2;j<=s && a!=2;j++){
                if(a%j==0){
                    flag = 0;
                    break;
                }
            }
          if(flag==1 && a!=1)
              System.out.println("Prime");
          else
              System.out.println("Not prime");
        }
    }
}