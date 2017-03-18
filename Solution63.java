import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution63 {

     public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int min=Integer.MAX_VALUE;
        int max=-1;
        int maxcount=-1,mincount=-1;        
        int score;
        for(int score_i=0; score_i < n; score_i++){
            score = in.nextInt();
            if(score >max)
                {
                max=score;
                maxcount++;
            }
            if(score<min)
                {
                min=score;
                mincount++;
            }
        }
        System.out.println(maxcount+" "+mincount);
       
    }
}
