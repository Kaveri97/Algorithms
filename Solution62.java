import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution62 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String S = in.next();
        String sos = "SOS";
        int count = 0;
        for (int i = 0; i < S.length(); i++) {
            if (S.charAt(i) != sos.charAt(i % 3)) count++;
        }
        System.out.println(count);
    }
}
