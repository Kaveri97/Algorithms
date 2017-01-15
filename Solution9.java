import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution9 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int x1 = in.nextInt();
        int v1 = in.nextInt();
        int x2 = in.nextInt();
        int v2 = in.nextInt();
        int flag = 0;
        for(int i=0; i<10000; i++){
            if(((x1 + v1*i)==(x2 + v2*i))){
                flag =1;
                break;
            }
        }
        if(flag == 1)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
