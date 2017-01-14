import java.io.*;
import java.util.*;

public class Solution5 {
	//Utopian Tree
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int t, h=1;
        Scanner scan = new Scanner(System.in);
        t = scan.nextInt();
        int[] a = new int[t];
        for(int i=0;i<t;i++){
            a[i] = scan.nextInt();
        }
        for(int j=0; j<t; j++){
            h=1;
            for(int k=0;k<a[j];k++){
                    if(k%2==1){
                        h = h+1;
                    }
                    else
                        h = h*2;
                }
            
            System.out.println(h);
        }
        
        
    }
}