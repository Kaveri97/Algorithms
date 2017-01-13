import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution2 {
//Designer PDF Viewer
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = 26;
        int h[] = new int[n];
        for(int h_i=0; h_i < n; h_i++){
            h[h_i] = in.nextInt();
        }
        String word = in.next();
        int ht=1,j=0;
        for( int i=0; i<word.length();i++){ 
            j=0;
            for( char ch='a';ch<='z';ch++,j++){
              if(word.charAt(i) == ch){
                  if(ht<h[j])
                      ht = h[j];
              }  
            }
        }
        System.out.println(word.length()*ht);
    }
}
