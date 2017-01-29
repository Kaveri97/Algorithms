import java.io.*;
import java.util.*;

public class Solution32 {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        String time;
        String timeb;
        int t;
        Scanner scan = new Scanner(System.in);
        time = scan.next();
        if(time.charAt(8)=='A'){
            if(12==Integer.parseInt(time.substring(0,2)))
                System.out.println("00"+time.substring(2,8));
            else
                System.out.println(time.substring(0,8));
        }
        else{
            t = 12 + Integer.parseInt(time.substring(0,2));
            if(12==Integer.parseInt(time.substring(0,2)))
                System.out.println("12"+time.substring(2,8));
            else
                System.out.println(t+time.substring(2,8));
        }
    }
}