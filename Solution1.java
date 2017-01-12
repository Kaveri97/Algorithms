import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution1 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long a = in.nextLong();
        long b = in.nextLong();
        long c = in.nextLong();
        long d = in.nextLong();
        long e = in.nextLong();
        long min = a+b+c+d;
        long max = a+b+c+d;
        long sum = e+b+c+d;
        if(min>sum)
            min = sum;
        if(max<sum)
            max = sum;
        sum = e+a+c+d;
        if(min>sum)
            min = sum;
        if(max<sum)
            max = sum;
        sum = e+b+a+d;
        if(min>sum)
            min = sum;
        if(max<sum)
            max = sum;
        sum = e+b+c+a;
        if(min>sum)
            min = sum;
        if(max<sum)
            max = sum;
        System.out.println(min +" " +max);
        }
}
