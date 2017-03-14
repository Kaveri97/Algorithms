import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution60 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q = in.nextInt();
        for(int a0 = 0; a0 < q; a0++){
            int j = 0;
            String t = "hackerrank";
            String s = in.next();
            for(int i=0; i<s.length() && j<t.length(); i++){
                if(s.charAt(i)==t.charAt(j))
                    j++;
            }
            if(j==t.length())
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}
