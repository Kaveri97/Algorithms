import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution46 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int s = in.nextInt();
        int t = in.nextInt();
        int a = in.nextInt();
        int b = in.nextInt();
        int m = in.nextInt();
        int n = in.nextInt();
        int[] apple = new int[m];
        for(int apple_i=0; apple_i < m; apple_i++){
            apple[apple_i] = in.nextInt();
        }
        int[] orange = new int[n];
        for(int orange_i=0; orange_i < n; orange_i++){
            orange[orange_i] = in.nextInt();
        }
        int counta = 0;
        int counto = 0;
        for(int i=0;i<m; i++){
            if(apple[i]>0){
                if((apple[i]+a)>=s && (apple[i]+a)<=t)
                    counta++;
            }
        }
        for(int i=0;i<n; i++){
            if(orange[i]<0){
                if((b+orange[i])>=s && (b+orange[i])<=t)
                    counto++;
            }
        }
        System.out.println(counta+"\n"+counto);
    }
}
