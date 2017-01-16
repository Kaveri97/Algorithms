import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution11 {
	
    public static void main(String[] args) {
        int i = 4;
        double d = 4.0;
        String s = "HackerRank ";
		
        Scanner scan = new Scanner(System.in);
        
        int j,sum;
        double d2, sumd;
        j = scan.nextInt();
        d2 = scan.nextDouble();
        scan.nextLine();
        String s2 = scan.nextLine();
        sum = i+j;
        sumd = d+d2;
        System.out.println(sum);
        System.out.println(sumd);
        System.out.println(s+s2);
        scan.close();
    }
}