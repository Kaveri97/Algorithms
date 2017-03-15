import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution61 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] types = new int[n];
        int countMax = 0;
        int count = 0,p=0,j;
        for(int types_i=0; types_i < n; types_i++){
            types[types_i] = in.nextInt();
        }
        for(int i=0; i<n; i++){
            count = 0;
            for(j=0; j<n; j++){
                if(types[i]==types[j]){
                    count++;
                }
            }
            if(countMax<=count){
                if(countMax==count){
                    if(types[i]<types[p]){
                        countMax = count;
                        p = i;
                    }
                }
                else{
                countMax = count;
                p = i;
                }
            }
        }
        System.out.println(types[p]);
    }
}
