import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution58 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int p = in.nextInt();
        int count=0,a=1,b=n-2;
        // your code goes here
        if((n%2==1)&&((p==n-1)||(p==n))||(p==1)||(n==1)){
            System.out.println(0);
            return;
        }
        else {
            while(a<p && b>=p){
                count++;
                a += 2;
                b -= 2;
            }
            System.out.println(count);
        }
    }
}
