import java.io.*;
import java.util.*;
import java.math.BigInteger;
public class Solution16 {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        BigInteger f = new BigInteger("1");
        int i;
        for(i=n; i>0;i--){
            f = f.multiply(BigInteger.valueOf(i));
        }
        System.out.println(f);
    }
}